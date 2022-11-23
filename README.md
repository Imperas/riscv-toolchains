# riscv-toolchains

branch rvv-1.0.0 with support for RiscV Vector specification version 1.0.0


# To Use:
```
git clone https://github.com/Imperas/riscv-toolchains -b rvv-1.0.0
export RISCV_PREFIX=riscv64-unknown-elf-
export PATH=${PATH}:$(pwd)/riscv-toolchains/Linux64/bin
${RISCV_PREFIX}gcc --target-help
```
