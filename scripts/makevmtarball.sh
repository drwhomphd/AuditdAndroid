#!/bin/bash

# The goal for this script is to compile the vm package together. It
# makes it easier than copying the files by hand. It's designed to work
# only with the QEMU img files. If you use anything else, it will break.
# It also only works with the x86 qemu image.
# @TODO: Support both X86 and ARM qemu platforms.

# This script works with relative directory paths so it will just break
# if you don't run it from this directory.
# @TODO: Make sure this script doesn't work with relative paths so it won't
#        break when run from other directories.

KERNELIMG="../prebuilt/qemu-audit-x86-kernel"

# Android root should be the first command line argument
ANDROIDROOT=$1

SCRATCHDIR=AndroidAuditX86Emu

# make our scratch directory
mkdir $SCRATCHDIR

# copy over our image files
cp ${ANDROIDROOT}/out/target/product/generic_x86/*.img ${SCRATCHDIR}/

# copy over our prebuilt kernel
cp $KERNELIMG $SCRATCHDIR

# copy our start scripts
cp ./startvm.sh ${SCRATCHDIR}/
cp ./startaudit.sh ${SCRATCHDIR}/

# tar+bzip up the scratchdir
tar cvvf ${SCRATCHDIR}.tar $SCRATCHDIR
bzip2 ${SCRATCHDIR}.tar

#Cleanup
rm -rf $SCRATCHDIR
