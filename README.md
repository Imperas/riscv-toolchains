# riscv-toolchains rvv-0.9x including support of vectors 0.9

# for vector rvv-0.9.x

RISCV_TUPLE=riscv64-unknown-elf

export RISCV_PREFIX=${RISCV_TUPLE}-

export RISCV_TOOLCHAIN=${TOPDIR}/riscv-toolchains-rvv-0.9.x/${IMPERAS_ARCH}

export PATH=${PATH}:${RISCV_TOOLCHAIN}/bin
