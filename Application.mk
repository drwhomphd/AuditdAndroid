# The Application.mk is used with the NDK to get things to
# build properly without using the default Google paths. Required
# because forcing people to build in an arbitrary path structure
# is stupid. I deny your ontology and replace it with my own.

# Set the root project directory (where the Android.mk will be)
APP_PROJECT_PATH := ./

# Set our build script because it's not in ./jni
APP_BUILD_SCRIPT := ./Android-NDK.mk

# Use the debug level of optimizations for now. You can uncomment the 
# release line and comment the debug line if needed.
APP_OPTIM := debug
#APP_OPTIM := release

# We have no CPP Flags, but just in case. These are also used as CFlags.
APP_CPPFLAGS := 

# We starget the x86 ABI for now
APP_ABI := x86
