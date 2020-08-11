#!/bin/bash

TARGET=sifive-riscv-none-gcc

SIFIVE=/home/tools/local/Linux64/sifive-riscv-none.0.8
EMBED=/home/tools/local/Linux64/riscv-none-embed

# replace stems
#   sifive-riscv-none-
# to
#   riscv-none-embed-
#
STEM1=sifive-riscv-none-
STEM2=riscv-none-embed-

if [ -d ${TARGET} ]; then
    rm -rf ${TARGET}
fi
mkdir ${TARGET}
pushd ${TARGET}
    (cd $EMBED;  tar cf - *) | tar xvf -
    (cd $SIFIVE; tar cf - *) | tar xvf -

    files=$(find bin -name "${STEM1}*")
    for s1 in $files; do
        s2=$(echo $s1 | sed "s/${STEM1}/${STEM2}/")
        echo "$s1 -> $s2"
        if [ -f $s2 ]; then
            echo "File $s2 exists, rename & link"
            mv ${s2} ${s2}-rename
            pushd bin
                src=$(basename ${s1})
                dst=$(basename ${s2})
                ln -s ${src} ${dst}
            popd
        fi
    done
    pushd riscv-none-embed
        if [ -d bin ]; then
            mv bin bin-rename
            ln -s ../riscv/bin bin
        fi
    popd
popd

