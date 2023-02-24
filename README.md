# riscv-toolchains

branch corev-openhw-gcc-ubuntu1804-20230220 with support for PULP V2

Originally downloaded from https://www.embecosm.com/resources/tool-chain-downloads/#corev

# To Use:
```
git clone https://github.com/Imperas/riscv-toolchains -b corev-openhw-gcc-ubuntu1804-20230220
export RISCV_PREFIX=riscv32-corev-elf-
export PATH=${PATH}:$(pwd)/riscv-toolchains/Linux64/bin
${RISCV_PREFIX}gcc --target-help
```
