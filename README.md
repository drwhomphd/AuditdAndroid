# AuditD on Android #

## Introduction ##
Our goal is to port a minimal set of userland tools from the GNU/Linux userland to the bionic/Linux userland of Android. We've stripped out most the functionality inherent in the Linux software including audisp, ausearch, and auparse. The audit stream is not sent directly to an AF_Unix socket (/dev/audit) by auditd. While not as elegant or robust as the Linux code, our goal is to provide access to the audit stream for Android applications with minimal overhead. Our choice for stripping down Audit is partly due to the fact bionic is horribly GNU incompatible, but also the smartphone platform should be treated than the traditional server/desktop due to resource and runtime constraints.

## Requirements ##
1. A rooted Android system.
2. Running the 2.6.29 kernel with CONFIG_AUDITSYSCALL=y
  * We needed to copy over the audit.h kernel header because Google uses clean headers. Their utilities to clean headers are unusable by those not blessed with the power of Google (i.e., the documentation is minimal and the ixd is horrible). More details in the directory structure section.
3. The Google NDK or the AOSP source code (Tested on 4.0.3 and 4.1.1)

## Compiling ##

### NDK ###
From inside this directory run the following command: 
ndk-build NDK_APPLICATION_MK=./Application.mk NDK_PROJECT_PATH=./

The obj and libs directory will contain the final output.

### AOSP ###
Copy this directory in to the <AndroidBuildRoot>/external directory. No need
to do anything else. It will compile in with AOSP.

### Custom kernel ###
You must have a kernel running with CONFIG_AUDIT=y and CONFIG_AUDITSYSCALL=y in the configuration. Instructions on building a kernel for Android can be found at source.android.com and various other sources on the Internet.

## Directory Structure ##

### Special Directories ###

There are two nonstandard, special, directories in this repository.

The 'kernel' directory includes kernel headers that are not present in Google's cleaned headers. While I have attempted to clean a new set of headers, I've found the scripts about as usable as writing the next great American novel in 'ed'. This header is from the 2.6.29 kernel. So this is a horribly fragile process until Google starts including the audit.h header, or in a perfect world, a complete set of kernel headers.

The 'libc' directory includes headers and source files that define functions not included in Google's non-POSIX compliant libc implementation. 

### Other Directories (That aren't as special) ###

The 'src' directory contains binary source for individual applications. The 'lib' directory contains source code shared between each application that was originally part of libaudit or libev. The 'etc' directory contains configuration specific files.

The 'prebuilt' directory contains precompiled binaries used for this program. As of right now it only contains the pre-compiled 2.6.29 kernel used with QEMU.

The 'scripts' directory contains helper scripts that can be used to aid testing the code, installing code on the system, and building vm tarballs. They're more utility glue than polished products.

The 'patches' directory contains patches that enable certain advanced functionalities in the AOSP build. For example, it would enable the creation of an AUDIT permission that could be used by userland applications.

## Modifications of the original Audit configuration ##

Our port uses the log_file specified in the configuration as a socket for communicating with clients. This log_file will be unlinked whenever auditd starts up so that the socket can be bound.

__Disclaimer__: The source code requires some serious refactoring after the modifications of the original audit code. Code cleanup of commented out and orphaned code is also needed.

## TODOs ##

- REFACTORING TO DO
  - Remove syslog dependency and switch to Android's logcat infrastructure.
  - Figure out how to get the old logging code up and running with the new
    AF_UNIX socket code in case people want to write audit logs to the 
    sdcard for whatever reason.

- CLEANUP TO DO
  - Remove GSSAPI related networking
  - Remove TCP related networking -- TCPWrappers etc.
