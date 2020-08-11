#include <stdio.h>

int main () {
    unsigned int i0, i1, i2;

    i0 = 100; i1 = 42; i2 = 55;
    i0 = i1 + i2;
    printf("%d + %d = %d\n", i1, i2, i0);

    i0 = 100; i1 = 42; i2 = 55;
    asm("add %0, %1, %2" : "=r" (i0) : "r" (i1), "r" (i2));
    printf("%d + %d = %d\n", i1, i2, i0);

    printf("\n");
    printf("test complete\n");
}
