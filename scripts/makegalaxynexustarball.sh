#!/bin/bash

# The goal for this script is to compile the imgs for the galaxy nexus together. 
# It makes it easier than copying the files by hand. It's designed to work
# only with the nexus img files. If you use anything else, it will break.

# This script works with relative directory paths so it will just break
# if you don't run it from this directory.
# @TODO: Make sure this script doesn't work with relative paths so it won't
#        break when run from other directories.

# @TODO: Add the ability for this script to print out its expected command line variables and check that they exist. 

# Android root should be the first command line argument
ANDROIDROOT=$1

SCRATCHDIR=AndroidAuditMaguro

# make our scratch directory
mkdir $SCRATCHDIR

# copy over our image files
cp ${ANDROIDROOT}/out/target/product/maguro/*.img ${SCRATCHDIR}/

# Needed for fastboot
cp ${ANDROIDROOT}/out/target/product/maguro/android-info.txt ${SCRATCHDIR}/

# copy over our prebuilt kernel
cp $KERNELIMG $SCRATCHDIR

# copy our start scripts
cp ./startaudit.sh ${SCRATCHDIR}/

# tar+bzip up the scratchdir
tar cvvf ${SCRATCHDIR}.tar $SCRATCHDIR
bzip2 -f ${SCRATCHDIR}.tar

#Cleanup
rm -rf $SCRATCHDIR
