/* android.h -- 
 * Copyright 2004-2012 SRI International 
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *  Nathaniel Husted <nhusted@gmail.com>
 */

/**
 * @brief Android specific includes
 *
 * */

// Android does not implement stpcpy
#include <stpcpy.h>

#define fgets_unlocked(x,y,z) fgets(x,y,z)

#define _POSIX_HOST_NAME_MAX 255

// This needs to be commented out for Android 4.2.1+
//#define O_DSYNC O_SYNC

typedef long fd_mask;
