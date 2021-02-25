# riscv-toolchains
branch rvp-v0.5.2-riscv64imadfcp-experimental with support for [RiscV DSP specification version 0.5.2](https://github.com/riscv/riscv-p-spec/blob/master/P-ext-proposal.pdf)

# To use: 
```
git clone https://github.com/Imperas/riscv-toolchains -b rvp-v0.5.2-riscv64imadfcp-experimental
TOPDIR=$(pwd)
RISCV_TUPLE=riscv64-elf
export RISCV_PREFIX=${RISCV_TUPLE}-
export RISCV_TOOLCHAIN=${TOPDIR}/riscv-toolchains/Linux64
export PATH=${PATH}:${RISCV_TOOLCHAIN}/bin
${RISCV_PREFIX}gcc --target-help
