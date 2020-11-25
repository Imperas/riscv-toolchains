# riscv-toolchains
branch rvb-experimental-20200712 with support for [RiscV Bit Manipulation specification version 0.92](https://github.com/riscv/riscv-bitmanip/blob/master/bitmanip-0.92.pdf)

# To use: 
```
git clone https://github.com/Imperas/riscv-toolchains -b rvb-experimental-20200712
TOPDIR=$(pwd)
RISCV_TUPLE=riscv32-unknown-elf
export RISCV_PREFIX=${RISCV_TUPLE}-
export RISCV_TOOLCHAIN=${TOPDIR}/riscv-toolchains/Linux64
export PATH=${PATH}:${RISCV_TOOLCHAIN}/bin
${RISCV_PREFIX}gcc --target-help
