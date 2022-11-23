# riscv-toolchains

branch rvk-1.0.0 with support for [RiscV Crypto specification version 1.0.0 scalar](https://github.com/riscv/riscv-crypto/releases/tag/v1.0.0-scalar)


# To Use:
```
git clone https://github.com/Imperas/riscv-toolchains -b rvk-1.0.0
export RISCV_PREFIX=riscv64-unknown-elf-
export PATH=${PATH}:$(pwd)/riscv-toolchains/Linux64/bin
${RISCV_PREFIX}gcc --target-help
```
