# riscv-toolchains rvv-0.8x including support of vectors 0.8

# directory in which toolchain cloned using 
#   git clone https://github.com/Imperas/riscv-toolchains -b rvv-0.8.x
TOPDIR=$(pwd)

# for vector rvv-0.8.x
RISCV_TUPLE=riscv-none-embed

export RISCV_PREFIX=${RISCV_TUPLE}-

export RISCV_TOOLCHAIN=${TOPDIR}/riscv-toolchains/${IMPERAS_ARCH}/sifive-riscv-none-gcc

export PATH=${PATH}:${RISCV_TOOLCHAIN}/bin
