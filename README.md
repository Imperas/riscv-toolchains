# riscv-toolchains rvv-0.8x including support of vectors 0.8

# for vector rvv-0.8.x
RISCV_TUPLE=riscv-none-embed

export RISCV_PREFIX=${RISCV_TUPLE}-

export RISCV_TOOLCHAIN=${TOPDIR}/riscv-toolchains-rvv-0.8.x/${IMPERAS_ARCH}/sifive-riscv-none-gcc

export PATH=${PATH}:${RISCV_TOOLCHAIN}/bin
