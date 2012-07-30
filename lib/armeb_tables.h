/* This is a generated file, see Makefile.am for its inputs. */
static const char armeb_syscall_strings[] = "accept\0accept4\0access\0acct\0add_key\0adjtimex\0alarm\0bdflush\0bind\0brk\0"
	"capget\0capset\0chdir\0chmod\0chown\0chown32\0chroot\0clock_adjtime\0clock_getres\0clock_gettime\0"
	"clock_nanosleep\0clock_settime\0clone\0close\0connect\0creat\0delete_module\0dup\0dup2\0dup3\0"
	"epoll_create\0epoll_create1\0epoll_ctl\0epoll_wait\0eventfd\0eventfd2\0execve\0exit\0exit_group\0faccessat\0"
	"fadvise64_64\0fallocate\0fanotify_init\0fanotify_mark\0fchdir\0fchmod\0fchmodat\0fchown\0fchown32\0fchownat\0"
	"fcntl\0fcntl64\0fdatasync\0fgetxattr\0flistxattr\0flock\0fork\0fremovexattr\0fsetxattr\0fstat\0"
	"fstat64\0fstatat64\0fstatfs\0fstatfs64\0fsync\0ftruncate\0ftruncate64\0futex\0futimesat\0get_mempolicy\0"
	"get_robust_list\0getcpu\0getcwd\0getdents\0getdents64\0getegid\0getegid32\0geteuid\0geteuid32\0getgid\0"
	"getgid32\0getgroups\0getgroups32\0getitimer\0getpeername\0getpgid\0getpgrp\0getpid\0getppid\0getpriority\0"
	"getresgid\0getresgid32\0getresuid\0getresuid32\0getrlimit\0getrusage\0getsid\0getsockname\0getsockopt\0gettid\0"
	"gettimeofday\0getuid\0getuid32\0getxattr\0init_module\0inotify_add_watch\0inotify_init\0inotify_init1\0inotify_rm_watch\0io_cancel\0"
	"io_destroy\0io_getevents\0io_setup\0io_submit\0ioctl\0ioprio_get\0ioprio_set\0ipc\0kexec_load\0keyctl\0"
	"kill\0lchown\0lchown32\0lgetxattr\0link\0linkat\0listen\0listxattr\0llistxattr\0llseek\0"
	"lookup_dcookie\0lremovexattr\0lseek\0lsetxattr\0lstat\0lstat64\0madvise\0mbind\0mincore\0mkdir\0"
	"mkdirat\0mknod\0mknodat\0mlock\0mlockall\0mmap\0mmap2\0mount\0move_pages\0mprotect\0"
	"mq_getsetattr\0mq_notify\0mq_open\0mq_timedreceive\0mq_timedsend\0mq_unlink\0mremap\0msgctl\0msgget\0msgrcv\0"
	"msgsnd\0msync\0munlock\0munlockall\0munmap\0name_to_handle_at\0nanosleep\0newselect\0nfsservctl\0nice\0"
	"open\0open_by_handle_at\0openat\0pause\0pciconfig_iobase\0pciconfig_read\0pciconfig_write\0perf_event_open\0personality\0pipe\0"
	"pipe2\0pivot_root\0poll\0prctl\0pread64\0preadv\0prlimit64\0process_vm_readv\0process_vm_writev\0ptrace\0"
	"pwrite64\0pwritev\0quotactl\0read\0readahead\0readdir\0readlink\0readlinkat\0readv\0reboot\0"
	"recv\0recvfrom\0recvmmsg\0recvmsg\0remap_file_pages\0removexattr\0rename\0renameat\0request_key\0restart_syscall\0"
	"rmdir\0rt_sigaction\0rt_sigpending\0rt_sigprocmask\0rt_sigqueueinfo\0rt_sigreturn\0rt_sigsuspend\0rt_sigtimedwait\0rt_tgsigqueueinfo\0sched_get_priority_max\0"
	"sched_get_priority_min\0sched_getaffinity\0sched_getparam\0sched_getscheduler\0sched_rr_get_interval\0sched_setaffinity\0sched_setparam\0sched_setscheduler\0sched_yield\0select\0"
	"semctl\0semget\0semop\0semtimedop\0send\0sendfile\0sendfile64\0sendmmsg\0sendmsg\0sendto\0"
	"set_mempolicy\0set_robust_list\0set_tid_address\0setdomainname\0setfsgid\0setfsgid32\0setfsuid\0setfsuid32\0setgid\0setgid32\0"
	"setgroups\0setgroups32\0sethostname\0setitimer\0setns\0setpgid\0setpriority\0setregid\0setregid32\0setresgid\0"
	"setresgid32\0setresuid\0setresuid32\0setreuid\0setreuid32\0setrlimit\0setsid\0setsockopt\0settimeofday\0setuid\0"
	"setuid32\0setxattr\0shmat\0shmctl\0shmdt\0shmget\0shutdown\0sigaction\0sigaltstack\0signalfd\0"
	"signalfd4\0sigpending\0sigprocmask\0sigreturn\0sigsuspend\0socket\0socketcall\0socketpair\0splice\0stat\0"
	"stat64\0statfs\0statfs64\0stime\0swapoff\0swapon\0symlink\0symlinkat\0sync\0sync_file_range\0"
	"syncfs\0syscall\0sysctl\0sysfs\0sysinfo\0syslog\0tee\0tgkill\0time\0timer_create\0"
	"timer_delete\0timer_getoverrun\0timer_gettime\0timer_settime\0timerfd_create\0timerfd_gettime\0timerfd_settime\0times\0tkill\0truncate\0"
	"truncate64\0ugetrlimit\0umask\0umount\0umount2\0uname\0unlink\0unlinkat\0unshare\0uselib\0"
	"ustat\0utime\0utimensat\0utimes\0vfork\0vhangup\0vmsplice\0vserver\0wait4\0waitid\0"
	"write\0writev";
static const unsigned armeb_syscall_s2i_s[] = {
	0,7,15,22,27,35,44,50,58,63,
	67,74,81,87,93,99,107,114,128,141,
	155,171,185,191,197,205,211,225,229,234,
	239,252,266,276,287,295,304,311,316,327,
	337,350,360,374,388,395,402,411,418,427,
	436,442,450,460,470,481,487,492,505,515,
	521,529,539,547,557,563,573,585,591,601,
	615,631,638,645,654,665,673,683,691,701,
	708,717,727,739,749,761,769,777,784,792,
	804,814,826,836,848,858,868,875,887,898,
	905,918,925,934,943,955,973,986,1000,1017,
	1027,1038,1051,1060,1070,1076,1087,1098,1102,1113,
	1120,1125,1132,1141,1151,1156,1163,1170,1180,1191,
	1198,1213,1226,1232,1242,1248,1256,1264,1270,1278,
	1284,1292,1298,1306,1312,1321,1326,1332,1338,1349,
	1358,1372,1382,1390,1406,1419,1429,1436,1443,1450,
	1457,1464,1470,1478,1489,1496,1514,1524,1534,1545,
	1550,1555,1573,1580,1586,1603,1618,1634,1650,1662,
	1667,1673,1684,1689,1695,1703,1710,1720,1737,1755,
	1762,1771,1779,1788,1793,1803,1811,1820,1831,1837,
	1844,1849,1858,1867,1875,1892,1904,1911,1920,1932,
	1948,1954,1967,1981,1996,2012,2025,2039,2055,2073,
	2096,2119,2137,2152,2171,2193,2211,2226,2245,2257,
	2264,2271,2278,2284,2295,2300,2309,2320,2329,2337,
	2344,2358,2374,2390,2404,2413,2424,2433,2444,2451,
	2460,2470,2482,2494,2504,2510,2518,2530,2539,2550,
	2560,2572,2582,2594,2603,2614,2624,2631,2642,2655,
	2662,2671,2680,2686,2693,2699,2706,2715,2725,2737,
	2746,2756,2767,2779,2789,2800,2807,2818,2829,2836,
	2841,2848,2855,2864,2870,2878,2885,2893,2903,2908,
	2924,2931,2939,2946,2952,2960,2967,2971,2978,2983,
	2996,3009,3026,3040,3054,3069,3085,3101,3107,3113,
	3122,3133,3144,3150,3157,3165,3171,3178,3187,3195,
	3202,3208,3214,3224,3231,3237,3245,3254,3262,3268,
	3275,3281,
};
static const int armeb_syscall_s2i_i[] = {
	285,366,33,51,309,124,27,134,282,45,
	184,185,12,15,182,212,61,372,264,263,
	265,262,120,6,283,8,129,41,63,358,
	250,357,251,252,351,356,11,1,248,334,
	270,352,367,368,133,94,333,95,207,325,
	55,221,148,231,234,143,2,237,228,108,
	197,327,100,267,118,93,194,240,326,320,
	339,345,183,141,217,50,202,49,201,47,
	200,80,205,105,287,132,65,20,64,96,
	171,211,165,209,76,77,147,286,295,224,
	78,24,199,229,128,317,316,360,318,247,
	244,245,243,246,54,315,314,117,347,311,
	37,16,198,230,9,330,284,232,233,140,
	249,236,19,227,107,196,220,319,219,39,
	323,14,324,150,152,90,192,21,344,125,
	279,278,274,277,276,275,163,304,303,302,
	301,144,151,153,91,370,162,142,169,34,
	5,371,322,29,271,272,273,364,136,42,
	359,218,168,172,180,361,369,376,377,26,
	181,362,131,3,225,89,85,332,145,88,
	291,292,365,297,253,235,38,329,310,0,
	40,174,176,175,178,173,179,177,363,159,
	160,242,155,157,161,241,154,156,158,82,
	300,299,298,312,289,187,239,374,296,290,
	321,338,256,121,139,216,138,215,46,214,
	81,206,74,104,375,57,97,71,204,170,
	210,164,208,70,203,75,66,294,79,23,
	213,226,305,308,306,307,293,67,186,349,
	355,73,126,119,72,281,102,288,340,106,
	195,99,266,25,115,87,83,331,36,341,
	373,113,149,135,116,103,342,268,13,257,
	261,260,259,258,350,354,353,43,238,92,
	193,191,60,22,52,122,10,328,337,86,
	62,30,348,269,190,111,343,313,114,280,
	4,146,
};
static int armeb_syscall_s2i(const char *s, int *value) {
	size_t len, i;
	len = strlen(s);
	{ char copy[len + 1];
	for (i = 0; i < len; i++) {
		char c = s[i];
		copy[i] = GT_ISUPPER(c) ? c - 'A' + 'a' : c;
	}
	copy[i] = 0;
	return s2i__(armeb_syscall_strings, armeb_syscall_s2i_s, armeb_syscall_s2i_i, 342, copy, value);
	}
}
static const unsigned armeb_syscall_i2s_direct[] = {
	1932,311,487,1788,3275,1550,191,-1u,205,1151,
	3171,304,81,2978,1292,87,1125,-1u,-1u,1226,
	777,1332,3150,2655,918,2864,1755,44,-1u,1580,
	3208,-1u,-1u,15,1545,-1u,2903,1120,1904,1278,
	1948,225,1662,3101,-1u,63,2444,701,-1u,683,
	665,22,3157,-1u,1070,436,-1u,2510,-1u,-1u,
	3144,107,3202,229,784,769,2624,2715,-1u,-1u,
	2594,2530,2789,2756,2482,2614,848,858,905,2642,
	717,2460,2257,2885,-1u,1811,3195,2878,1837,1803,
	1321,1489,3113,563,395,411,792,2518,-1u,2848,
	539,-1u,2807,2960,2494,739,2836,1242,515,-1u,
	-1u,3237,-1u,2931,3262,2870,2952,1098,557,2779,
	185,2390,3165,-1u,35,1349,2767,-1u,943,211,
	-1u,1779,761,388,50,2946,1650,-1u,2424,2404,
	1191,645,1524,481,1464,1831,3281,868,450,2939,
	1306,1470,1312,1478,2211,2137,2226,2152,2245,2073,
	2096,2171,1514,1429,2572,826,-1u,-1u,1684,1534,
	2550,804,1689,2012,1954,1981,1967,2039,1996,2025,
	1695,1762,93,638,67,74,2725,2300,-1u,-1u,
	3231,3133,1326,3122,573,2841,1248,521,1132,925,
	708,691,673,2603,2539,727,2470,418,2582,836,
	2560,814,99,2662,2451,2433,2413,654,1673,1270,
	1256,442,-1u,-1u,898,1793,2671,1232,505,934,
	1141,460,1170,1180,470,1892,1213,492,3107,2309,
	585,2193,2119,1051,1027,1038,1060,1017,316,1198,
	239,266,276,1875,-1u,-1u,2374,2983,3040,3026,
	3009,2996,171,141,128,155,2855,547,2971,3224,
	337,1586,1603,1618,1382,1419,1406,1390,1372,1358,
	3268,2800,58,197,1163,0,875,749,2818,2295,
	2337,1844,1849,2706,2631,887,2329,1867,2278,2271,
	2264,1457,1450,1443,1436,2680,2693,2699,2686,27,
	1920,1113,2284,3254,1087,1076,973,955,1000,1264,
	601,2344,1573,1284,1298,427,591,529,3178,1911,
	1156,2893,1820,402,327,-1u,-1u,3187,2358,615,
	2829,2908,2967,3245,1338,631,-1u,1102,3214,2737,
	3054,287,350,3085,3069,2746,295,252,234,1667,
	986,1703,1771,2055,1634,1858,7,360,374,1710,
	1496,1555,114,2924,2320,2504,1720,1737,
};
static const char *armeb_syscall_i2s(int v) {
	return i2s_direct__(armeb_syscall_strings, armeb_syscall_i2s_direct, 0, 377, v);
}
