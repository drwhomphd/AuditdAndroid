/**
 * @brief Android specific includes
 *
 * */

// Android does not implement stpcpy
#include <stpcpy.h>

#define fgets_unlocked(x,y,z) fgets(x,y,z)
