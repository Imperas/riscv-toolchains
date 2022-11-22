riscv-toolchains

branch rvb-1.0.0 with support for RiscV Bitmanip specification version 1.0.0 

To Use:

git clone https://github.com/Imperas/riscv-toolchains -b rvb-1.0.0


export RISCV_PREFIX=riscv32-unknown-elf-

export PATH=${PATH}:$(pwd)/riscv-toolchains/Linux64/bin


${RISCV_PREFIX}gcc --target-help

