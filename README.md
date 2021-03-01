# riscv-toolchains

branch rvk-0.7.0 with support for [RiscV Crypto specification version 0.7.2 scalar](https://github.com/riscv/riscv-crypto/releases/tag/v0.7.2-scalar)


# To Use:
```
git clone https://github.com/Imperas/riscv-toolchains -b rvk-0.7.0
TOPDIR=$(pwd)
RISCV_TUPLE=riscv64-unknown-elf
export RISCV_PREFIX=${RISCV_TUPLE}-
export RISCV_TOOLCHAIN=${TOPDIR}/riscv-toolchains/Linux64
export PATH=${PATH}:${RISCV_TOOLCHAIN}/bin
${RISCV_PREFIX}gcc --target-help
```
