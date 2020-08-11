#include <stdio.h>
#include <string.h>

//
// example 16.7
//

char *vec_strcpy(char *dst, char *src) {
    asm(
        "mv        a2, a0\n"         // Copy dst
    "loop:\n"
        "vsetvli   x0, x0, e8\n"     // Max length vectors of bytes
        "vlbuff.v  v1, (a1)\n"       // Get src bytes
        "csrr      t1, vl\n"         // Get number of bytes fetched
        "vseq.vi   v0, v1, 0\n"      // Flag zero bytes
        "vmfirst.m a3, v0\n"         // Zero found?
        "add       a1, a1, t1\n"     // Bump pointer
        "vmsif.m   v0, v0\n"         // Set mask up to and including zero byte.
        "vsb.v     v1, (a2), v0.t\n" // Write out bytes
        "add       a2, a2, t1\n"     // Bump pointer
        "bltz      a3, loop\n"       // Zero byte not found, so loop
    );
}

#define LEN 256
int main () {

    char src[LEN], dst[LEN];
    unsigned int i0, i1, i2;

    bzero(src, LEN);
    bzero(dst, LEN);
    sprintf(src, "Hello World from all at RISCV");
    strcpy(dst, src);
    printf("src=%s\n", src);
    printf("dst=%s\n", dst);
    printf("\n");

    bzero(src, LEN);
    bzero(dst, LEN);
    sprintf(src, "Hello World from all at RISCV - Vector Extension");
    vec_strcpy(dst, src);
    printf("src=%s\n", src);
    printf("dst=%s\n", dst);
    printf("\n");

    printf("Test Complete");
}
