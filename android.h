/**
 * @brief Android specific includes
 *
 * */

// Android does not implement stpcpy
#include <stpcpy.h>

#define fgets_unlocked(x,y,z) fgets(x,y,z)

#define _POSIX_HOST_NAME_MAX 255
#define O_DSYNC O_SYNC

typedef long fd_mask;
