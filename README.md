# riscv-toolchains rvv-0.9x including support of vectors 0.9

# directory in which toolchain cloned using 
#   git clone https://github.com/Imperas/riscv-toolchains -b rvv-0.9.x

TOPDIR=$(pwd)

# for vector rvv-0.9.x

RISCV_TUPLE=riscv64-unknown-elf

export RISCV_PREFIX=${RISCV_TUPLE}-

export RISCV_TOOLCHAIN=${TOPDIR}/riscv-toolchains/Linux64

export PATH=${PATH}:${RISCV_TOOLCHAIN}/bin
