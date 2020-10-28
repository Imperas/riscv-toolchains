# riscv-toolchains
branch rvv-0.8x with support for [RiscV Vector specification version 0.8](https://github.com/riscv/riscv-v-spec/releases/tag/0.8)

# To use: 
```
git clone https://github.com/Imperas/riscv-toolchains -b rvv-0.8.x
TOPDIR=$(pwd)
RISCV_TUPLE=riscv-none-embed
export RISCV_PREFIX=${RISCV_TUPLE}-
export RISCV_TOOLCHAIN=${TOPDIR}/riscv-toolchains/Linux64/sifive-riscv-none-gcc
export PATH=${PATH}:${RISCV_TOOLCHAIN}/bin
riscv-none-embed-gcc --target-help
