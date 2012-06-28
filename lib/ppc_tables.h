/* This is a generated file, see Makefile.am for its inputs. */
static const char ppc_syscall_strings[] = "_llseek\0_newselect\0_sysctl\0accept\0accept4\0access\0acct\0add_key\0adjtimex\0afs_syscall\0"
	"alarm\0bdflush\0bind\0break\0brk\0capget\0capset\0chdir\0chmod\0chown\0"
	"chroot\0clock_adjtime\0clock_getres\0clock_gettime\0clock_nanosleep\0clock_settime\0clone\0close\0connect\0creat\0"
	"create_module\0delete_module\0dup\0dup2\0dup3\0epoll_create\0epoll_create1\0epoll_ctl\0epoll_pwait\0epoll_wait\0"
	"eventfd\0eventfd2\0execve\0exit\0exit_group\0faccessat\0fadvise64\0fadvise64_64\0fallocate\0fanotify_init\0"
	"fanotify_mark\0fchdir\0fchmod\0fchmodat\0fchown\0fchownat\0fcntl\0fcntl64\0fdatasync\0fgetxattr\0"
	"flistxattr\0flock\0fork\0fremovexattr\0fsetxattr\0fstat\0fstat64\0fstatat\0fstatfs\0fstatfs64\0"
	"fsync\0ftime\0ftruncate\0ftruncate64\0futex\0futimesat\0get_kernel_syms\0get_robust_list\0getcpu\0getcwd\0"
	"getdents\0getdents64\0getegid\0geteuid\0getgid\0getgroups\0getitimer\0getpeername\0getpgid\0getpgrp\0"
	"getpid\0getpmsg\0getppid\0getpriority\0getresgid\0getresuid\0getrlimit\0getrusage\0getsid\0getsockname\0"
	"getsockopt\0gettid\0gettimeofday\0getuid\0getxattr\0gtty\0idle\0init_module\0inotify_add_watch\0inotify_init\0"
	"inotify_init1\0inotify_rm_watch\0io_cancel\0io_destroy\0io_getevents\0io_setup\0io_submit\0ioctl\0ioperm\0iopl\0"
	"ioprio_get\0ioprio_set\0ipc\0kexec_load\0keyctl\0kill\0lchown\0lgetxattr\0link\0linkat\0"
	"listen\0listxattr\0llistxattr\0lock\0lookup_dcookie\0lremovexattr\0lseek\0lsetxattr\0lstat\0lstat64\0"
	"madvise\0mincore\0mkdir\0mkdirat\0mknod\0mknodat\0mlock\0mlockall\0mmap\0mmap2\0"
	"modify_ldt\0mount\0move_pages\0mprotect\0mpx\0mq_getsetattr\0mq_notify\0mq_open\0mq_timedreceive\0mq_timedsend\0"
	"mq_unlink\0mremap\0msync\0multiplexer\0munlock\0munlockall\0munmap\0name_to_handle_at\0nanosleep\0nfsservctl\0"
	"nice\0oldfstat\0oldlstat\0oldolduname\0oldstat\0olduname\0open\0open_by_handle_at\0openat\0pause\0"
	"pciconfig_iobase\0pciconfig_read\0pciconfig_write\0perf_counter_open\0personality\0pipe\0pipe2\0pivot_root\0poll\0ppoll\0"
	"prctl\0pread\0preadv\0prlimit64\0process_vm_readv\0process_vm_writev\0prof\0profil\0pselect6\0ptrace\0"
	"putpmsg\0pwrite\0pwritev\0query_module\0quotactl\0read\0readahead\0readdir\0readlink\0readlinkat\0"
	"readv\0reboot\0recv\0recvfrom\0recvmmsg\0recvmsg\0remap_file_pages\0removexattr\0rename\0renameat\0"
	"request_key\0rmdir\0rt_sigaction\0rt_sigpending\0rt_sigprocmask\0rt_sigqueueinfo\0rt_sigreturn\0rt_sigsuspend\0rt_sigtimedwait\0rt_tgsigqueueinfo\0"
	"rtas\0sched_get_priority_max\0sched_get_priority_min\0sched_getaffinity\0sched_getparam\0sched_getscheduler\0sched_rr_get_interval\0sched_setaffinity\0sched_setparam\0sched_setscheduler\0"
	"sched_yield\0select\0send\0sendfile\0sendfile64\0sendmmsg\0sendmsg\0sendto\0set_robust_list\0set_tid_address\0"
	"setdomainname\0setfsgid\0setfsuid\0setgid\0setgroups\0sethostname\0setitimer\0setns\0setpgid\0setpriority\0"
	"setregid\0setresgid\0setresuid\0setreuid\0setrlimit\0setsid\0setsockopt\0settimeofday\0setuid\0setxattr\0"
	"sgetmask\0shutdown\0sigaction\0sigaltstack\0signal\0signalfd\0signalfd4\0sigpending\0sigprocmask\0sigreturn\0"
	"sigsuspend\0socket\0socketcall\0socketpair\0splice\0spu_create\0spu_run\0ssetmask\0stat\0stat64\0"
	"statfs\0statfs64\0stime\0stty\0subpage_prot\0swapcontext\0swapoff\0swapon\0symlink\0symlinkat\0"
	"sync\0sync_file_range2\0syncfs\0sysfs\0sysinfo\0syslog\0tee\0tgkill\0time\0timer_create\0"
	"timer_delete\0timer_getoverrun\0timer_gettime\0timer_settime\0timerfd\0timerfd_gettime\0timerfd_settime\0times\0tkill\0truncate\0"
	"truncate64\0tuxcall\0ugetrlimit\0ulimit\0umask\0umount\0umount2\0uname\0unlink\0unlinkat\0"
	"unshare\0uselib\0ustat\0utime\0utimensat\0utimes\0vfork\0vhangup\0vm86\0vmsplice\0"
	"wait4\0waitid\0waitpid\0write\0writev";
static const unsigned ppc_syscall_s2i_s[] = {
	0,8,19,27,34,42,49,54,62,71,
	83,89,97,102,108,112,119,126,132,138,
	144,151,165,178,192,208,222,228,234,242,
	248,262,276,280,285,290,303,317,327,339,
	350,358,367,374,379,390,400,410,423,433,
	447,461,468,475,484,491,500,506,514,524,
	534,545,551,556,569,579,585,593,601,609,
	619,625,631,641,653,659,669,685,701,708,
	715,724,735,743,751,758,768,778,790,798,
	806,813,821,829,841,851,861,871,881,888,
	900,911,918,931,938,947,952,957,969,987,
	1000,1014,1031,1041,1052,1065,1074,1084,1090,1097,
	1102,1113,1124,1128,1139,1146,1151,1158,1168,1173,
	1180,1187,1197,1208,1213,1228,1241,1247,1257,1263,
	1271,1279,1287,1293,1301,1307,1315,1321,1330,1335,
	1341,1352,1358,1369,1378,1382,1396,1406,1414,1430,
	1443,1453,1460,1466,1478,1486,1497,1504,1522,1532,
	1543,1548,1557,1566,1578,1586,1595,1600,1618,1625,
	1631,1648,1663,1679,1697,1709,1714,1720,1731,1736,
	1742,1748,1754,1761,1771,1788,1806,1811,1818,1827,
	1834,1842,1849,1857,1870,1879,1884,1894,1902,1911,
	1922,1928,1935,1940,1949,1958,1966,1983,1995,2002,
	2011,2023,2029,2042,2056,2071,2087,2100,2114,2130,
	2148,2153,2176,2199,2217,2232,2251,2273,2291,2306,
	2325,2337,2344,2349,2358,2369,2378,2386,2393,2409,
	2425,2439,2448,2457,2464,2474,2486,2496,2502,2510,
	2522,2531,2541,2551,2560,2570,2577,2588,2601,2608,
	2617,2626,2635,2645,2657,2664,2673,2683,2694,2706,
	2716,2727,2734,2745,2756,2763,2774,2782,2791,2796,
	2803,2810,2819,2825,2830,2843,2855,2863,2870,2878,
	2888,2893,2910,2917,2923,2931,2938,2942,2949,2954,
	2967,2980,2997,3011,3025,3033,3049,3065,3071,3077,
	3086,3097,3105,3116,3123,3129,3136,3144,3150,3157,
	3166,3174,3181,3187,3193,3203,3210,3216,3224,3229,
	3238,3244,3251,3259,3265,
};
static const int ppc_syscall_s2i_i[] = {
	140,142,149,330,344,33,51,269,124,137,
	27,134,327,17,45,183,184,12,15,181,
	61,347,247,246,248,245,120,6,328,8,
	127,129,41,63,316,236,315,237,303,238,
	307,314,11,1,234,298,233,254,309,323,
	324,133,94,297,95,289,55,204,148,214,
	217,143,2,220,211,108,197,291,100,253,
	118,35,93,194,221,290,130,299,302,182,
	141,202,50,49,47,80,105,332,132,65,
	20,187,64,96,170,165,76,77,147,331,
	340,207,78,24,212,32,112,128,276,275,
	318,277,231,228,229,227,230,54,101,110,
	274,273,117,268,271,37,16,213,9,294,
	329,215,216,53,235,219,19,210,107,196,
	205,206,39,287,14,288,150,152,90,192,
	123,21,301,125,56,267,266,262,265,264,
	263,163,144,201,151,153,91,345,162,168,
	34,28,84,59,18,109,5,346,286,29,
	200,198,199,319,136,42,317,203,167,281,
	171,179,320,325,351,352,44,98,280,26,
	188,180,321,166,131,3,191,89,85,296,
	145,88,336,337,343,342,239,218,38,293,
	270,40,173,175,174,177,172,178,176,322,
	255,159,160,223,155,157,161,222,154,156,
	158,82,334,186,226,349,341,335,300,232,
	121,139,138,46,81,74,104,350,57,97,
	71,169,164,70,75,66,339,79,23,209,
	68,338,67,185,48,305,313,73,126,119,
	72,326,102,333,283,279,278,69,106,195,
	99,252,25,31,310,249,115,87,83,295,
	36,308,348,135,116,103,284,250,13,240,
	244,243,242,241,306,312,311,43,208,92,
	193,225,190,58,60,22,52,122,10,292,
	282,86,62,30,304,251,189,111,113,285,
	114,272,7,4,146,
};
static int ppc_syscall_s2i(const char *s, int *value) {
	size_t len, i;
	len = strlen(s);
	{ char copy[len + 1];
	for (i = 0; i < len; i++) {
		char c = s[i];
		copy[i] = GT_ISUPPER(c) ? c - 'A' + 'a' : c;
	}
	copy[i] = 0;
	return s2i__(ppc_syscall_strings, ppc_syscall_s2i_s, ppc_syscall_s2i_i, 345, copy, value);
	}
}
static const unsigned ppc_syscall_i2s_direct[] = {
	374,551,1879,3259,1595,228,3251,242,1168,3150,
	367,126,2949,1301,132,1151,102,1578,1241,806,
	1352,3129,2601,931,2819,1827,83,1548,1625,3187,
	2825,947,42,1543,625,2888,1146,1995,1287,2023,
	276,1709,3065,1806,108,2457,751,2657,743,735,
	49,3136,1208,1084,500,1378,2502,3116,1566,3123,
	144,3181,280,821,798,2570,2635,2617,2782,2551,
	2522,2716,2683,2474,2560,861,871,918,2588,758,
	2464,2337,2870,1557,1902,3174,2863,1928,1894,1330,
	1497,3077,631,468,484,829,2510,1811,2803,601,
	1090,2734,2931,2486,768,2791,1257,579,1586,1097,
	3216,952,3224,3238,2855,2923,1124,619,2706,222,
	2425,3144,1341,62,1369,2694,248,957,262,669,
	1870,790,461,89,2917,1697,71,2448,2439,0,
	715,8,545,1460,1922,3265,881,514,19,1315,
	1478,1321,1486,2291,2217,2306,2232,2325,2153,2176,
	2251,1522,1453,2541,851,1857,1731,1532,2531,841,
	1742,2087,2029,2056,2042,2114,2071,2100,1748,1842,
	138,708,112,119,2645,2349,813,1834,3210,3105,
	1884,1335,3086,641,2796,1263,585,1648,1663,1631,
	1466,724,1720,506,1271,1279,911,3071,2608,1247,
	569,938,1158,524,1187,1197,534,1983,1228,556,
	653,2273,2199,-1u,3097,2358,1065,1041,1052,1074,
	1031,2409,400,379,1213,290,317,339,1966,2954,
	3011,2997,2980,2967,208,178,165,192,2843,2942,
	3203,2810,609,410,2148,-1u,-1u,-1u,-1u,-1u,
	-1u,1406,1443,1430,1414,1396,1382,1128,54,2011,
	1139,3244,1113,1102,987,969,1014,2774,2763,1818,
	1736,3166,2756,2938,3229,1618,1293,1307,491,659,
	593,3157,2002,1173,2878,1911,475,390,685,2393,
	1358,701,327,3193,2664,3025,350,2893,423,2830,
	3049,3033,2673,358,303,285,1714,1000,1679,1754,
	1849,2130,433,447,1761,2727,97,234,1180,27,
	888,778,2745,2344,2386,1935,1940,2626,2577,900,
	2378,1958,1949,34,1504,1600,151,2910,2369,2496,
	1771,1788,
};
static const char *ppc_syscall_i2s(int v) {
	return i2s_direct__(ppc_syscall_strings, ppc_syscall_i2s_direct, 1, 352, v);
}
