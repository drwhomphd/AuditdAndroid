/* This is a generated file, see Makefile.am for its inputs. */
static const char x86_64_syscall_strings[] = "_sysctl\0accept\0accept4\0access\0acct\0add_key\0adjtimex\0afs_syscall\0alarm\0arch_prctl\0"
	"bind\0brk\0capget\0capset\0chdir\0chmod\0chown\0chroot\0clock_adjtime\0clock_getres\0"
	"clock_gettime\0clock_nanosleep\0clock_settime\0clone\0close\0connect\0creat\0create_module\0delete_module\0dup\0"
	"dup2\0dup3\0epoll_create\0epoll_create1\0epoll_ctl\0epoll_ctl_old\0epoll_pwait\0epoll_wait\0epoll_wait_old\0eventfd\0"
	"eventfd2\0execve\0exit\0exit_group\0faccessat\0fadvise64\0fallocate\0fanotify_init\0fanotify_mark\0fchdir\0"
	"fchmod\0fchmodat\0fchown\0fchownat\0fcntl\0fdatasync\0fgetxattr\0flistxattr\0flock\0fork\0"
	"fremovexattr\0fsetxattr\0fstat\0fstatfs\0fsync\0ftruncate\0futex\0futimesat\0get_kernel_syms\0get_mempolicy\0"
	"get_robust_list\0get_thread_area\0getcpu\0getcwd\0getdents\0getdents64\0getegid\0geteuid\0getgid\0getgroups\0"
	"getitimer\0getpeername\0getpgid\0getpgrp\0getpid\0getpmsg\0getppid\0getpriority\0getresgid\0getresuid\0"
	"getrlimit\0getrusage\0getsid\0getsockname\0getsockopt\0gettid\0gettimeofday\0getuid\0getxattr\0init_module\0"
	"inotify_add_watch\0inotify_init\0inotify_init1\0inotify_rm_watch\0io_cancel\0io_destroy\0io_getevents\0io_setup\0io_submit\0ioctl\0"
	"ioperm\0iopl\0ioprio_get\0ioprio_set\0kexec_load\0keyctl\0kill\0lchown\0lgetxattr\0link\0"
	"linkat\0listen\0listxattr\0llistxattr\0lookup_dcookie\0lremovexattr\0lseek\0lsetxattr\0lstat\0madvise\0"
	"mbind\0migrate_pages\0mincore\0mkdir\0mkdirat\0mknod\0mknodat\0mlock\0mlockall\0mmap\0"
	"modify_ldt\0mount\0move_pages\0mprotect\0mq_getsetattr\0mq_notify\0mq_open\0mq_timedreceive\0mq_timedsend\0mq_unlink\0"
	"mremap\0msgctl\0msgget\0msgrcv\0msgsnd\0msync\0munlock\0munlockall\0munmap\0name_to_handle_at\0"
	"nanosleep\0newfstatat\0nfsservctl\0open\0open_by_handle_at\0openat\0pause\0perf_event_open\0personality\0pipe\0"
	"pipe2\0pivot_root\0poll\0ppoll\0prctl\0pread\0preadv\0prlimit64\0process_vm_readv\0process_vm_writev\0"
	"pselect6\0ptrace\0putpmsg\0pwrite\0pwritev\0query_module\0quotactl\0read\0readahead\0readlink\0"
	"readlinkat\0readv\0reboot\0recvfrom\0recvmmsg\0recvmsg\0remap_file_pages\0removexattr\0rename\0renameat\0"
	"request_key\0restart_syscall\0rmdir\0rt_sigaction\0rt_sigpending\0rt_sigprocmask\0rt_sigqueueinfo\0rt_sigreturn\0rt_sigsuspend\0rt_sigtimedwait\0"
	"rt_tgsigqueueinfo\0sched_get_priority_max\0sched_get_priority_min\0sched_getaffinity\0sched_getparam\0sched_getscheduler\0sched_rr_get_interval\0sched_setaffinity\0sched_setparam\0sched_setscheduler\0"
	"sched_yield\0security\0select\0semctl\0semget\0semop\0semtimedop\0sendfile\0sendmmsg\0sendmsg\0"
	"sendto\0set_mempolicy\0set_robust_list\0set_thread_area\0set_tid_address\0setdomainname\0setfsgid\0setfsuid\0setgid\0setgroups\0"
	"sethostname\0setitimer\0setns\0setpgid\0setpriority\0setregid\0setresgid\0setresuid\0setreuid\0setrlimit\0"
	"setsid\0setsockopt\0settimeofday\0setuid\0setxattr\0shmat\0shmctl\0shmdt\0shmget\0shutdown\0"
	"sigaltstack\0signalfd\0signalfd4\0socket\0socketpair\0splice\0stat\0statfs\0swapoff\0swapon\0"
	"symlink\0symlinkat\0sync\0sync_file_range\0syncfs\0sysfs\0sysinfo\0syslog\0tee\0tgkill\0"
	"time\0timer_create\0timer_delete\0timer_getoverrun\0timer_gettime\0timer_settime\0timerfd\0timerfd_gettime\0timerfd_settime\0times\0"
	"tkill\0truncate\0tuxcall\0umask\0umount2\0uname\0unlink\0unlinkat\0unshare\0uselib\0"
	"ustat\0utime\0utimensat\0utimes\0vfork\0vhangup\0vmsplice\0vserver\0wait4\0waitid\0"
	"write\0writev";
static const unsigned x86_64_syscall_s2i_s[] = {
	0,8,15,23,30,35,43,52,64,70,
	81,86,90,97,104,110,116,122,129,143,
	156,170,186,200,206,212,220,226,240,254,
	258,263,268,281,295,305,319,331,342,357,
	365,374,381,386,397,407,417,427,441,455,
	462,469,478,485,494,500,510,520,531,537,
	542,555,565,571,579,585,595,601,611,627,
	641,657,673,680,687,696,707,715,723,730,
	740,750,762,770,778,785,793,801,813,823,
	833,843,853,860,872,883,890,903,910,919,
	931,949,962,976,993,1003,1014,1027,1036,1046,
	1052,1059,1064,1075,1086,1097,1104,1109,1116,1126,
	1131,1138,1145,1155,1166,1181,1194,1200,1210,1216,
	1224,1230,1244,1252,1258,1266,1272,1280,1286,1295,
	1300,1311,1317,1328,1337,1351,1361,1369,1385,1398,
	1408,1415,1422,1429,1436,1443,1449,1457,1468,1475,
	1493,1503,1514,1525,1530,1548,1555,1561,1577,1589,
	1594,1600,1611,1616,1622,1628,1634,1641,1651,1668,
	1686,1695,1702,1710,1717,1725,1738,1747,1752,1762,
	1771,1782,1788,1795,1804,1813,1821,1838,1850,1857,
	1866,1878,1894,1900,1913,1927,1942,1958,1971,1985,
	2001,2019,2042,2065,2083,2098,2117,2139,2157,2172,
	2191,2203,2212,2219,2226,2233,2239,2250,2259,2268,
	2276,2283,2297,2313,2329,2345,2359,2368,2377,2384,
	2394,2406,2416,2422,2430,2442,2451,2461,2471,2480,
	2490,2497,2508,2521,2528,2537,2543,2550,2556,2563,
	2572,2584,2593,2603,2610,2621,2628,2633,2640,2648,
	2655,2663,2673,2678,2694,2701,2707,2715,2722,2726,
	2733,2738,2751,2764,2781,2795,2809,2817,2833,2849,
	2855,2861,2870,2878,2884,2892,2898,2905,2914,2922,
	2929,2935,2941,2951,2958,2964,2972,2981,2989,2995,
	3002,3008,
};
static const int x86_64_syscall_s2i_i[] = {
	156,43,288,21,163,248,159,183,37,158,
	49,12,125,126,80,90,92,161,305,229,
	228,230,227,56,3,42,85,174,176,32,
	33,292,213,291,233,214,281,232,215,284,
	290,59,60,231,269,221,285,300,301,81,
	91,268,93,260,72,75,193,196,73,57,
	199,190,5,138,74,77,202,261,177,239,
	274,211,309,79,78,217,108,107,104,115,
	36,52,121,111,39,181,110,140,120,118,
	97,98,124,51,55,186,96,102,191,175,
	254,253,294,255,210,207,208,206,209,16,
	173,172,252,251,246,250,62,94,192,86,
	265,50,194,195,212,198,8,189,6,28,
	237,256,27,83,258,133,259,149,151,9,
	154,165,279,10,245,244,240,243,242,241,
	25,71,68,70,69,26,150,152,11,303,
	35,262,180,2,304,257,34,298,135,22,
	293,155,7,271,157,17,295,302,310,311,
	270,101,182,18,296,178,179,0,187,89,
	267,19,169,45,299,47,216,197,82,264,
	249,219,84,13,127,14,129,15,130,128,
	297,146,147,204,143,145,148,203,142,144,
	24,185,23,66,64,65,220,40,307,46,
	44,238,273,205,218,171,123,122,106,116,
	170,38,308,109,141,114,119,117,113,160,
	112,54,164,105,188,30,31,67,29,48,
	131,282,289,41,53,275,4,137,168,167,
	88,266,162,277,306,139,99,103,276,234,
	201,222,226,225,224,223,283,287,286,100,
	200,76,184,95,166,63,87,263,272,134,
	136,132,280,235,58,153,278,236,61,247,
	1,20,
};
static int x86_64_syscall_s2i(const char *s, int *value) {
	size_t len, i;
	len = strlen(s);
	{ char copy[len + 1];
	for (i = 0; i < len; i++) {
		char c = s[i];
		copy[i] = GT_ISUPPER(c) ? c - 'A' + 'a' : c;
	}
	copy[i] = 0;
	return s2i__(x86_64_syscall_strings, x86_64_syscall_s2i_s, x86_64_syscall_s2i_i, 312, copy, value);
	}
}
static const unsigned x86_64_syscall_i2s_direct[] = {
	1747,3002,1525,206,2628,565,1210,1611,1194,1295,
	1328,1468,86,1900,1927,1958,1046,1628,1710,1782,
	3008,23,1589,2212,2191,1408,1443,1244,1216,2556,
	2537,2543,254,258,1555,1493,740,64,2406,778,
	2250,2603,212,8,2276,1795,2268,1813,2563,81,
	1138,860,750,2610,2497,872,200,537,2958,374,
	381,2989,1104,2892,2226,2233,2219,2550,1422,1436,
	1429,1415,494,531,579,500,2861,585,687,680,
	104,455,1850,1252,1894,220,1126,2898,2655,1762,
	110,462,116,478,1109,2878,890,833,843,2707,
	2849,1695,903,2715,723,2521,2377,715,707,2422,
	793,770,2490,2471,2442,730,2384,2461,823,2451,
	813,762,2368,2359,853,90,97,1913,1985,1942,
	1971,2572,2935,1266,2922,1577,2929,2633,571,2701,
	801,2430,2157,2083,2172,2098,2019,2042,2117,1280,
	1449,1286,1457,2964,1300,1600,0,1622,70,43,
	2480,122,2673,30,2508,1311,2884,2648,2640,1788,
	2394,2345,1059,1052,226,919,240,611,1725,1738,
	1514,785,1702,52,2870,2203,883,1752,2528,1200,
	555,910,1116,510,1145,1155,520,1838,1181,542,
	2855,2733,595,2139,2065,2313,1027,1003,1014,1036,
	993,657,1166,268,305,342,1821,696,2329,1878,
	2239,407,2738,2795,2781,2764,2751,186,156,143,
	170,386,331,295,2726,2951,2981,1224,2283,627,
	1361,1398,1385,1369,1351,1337,1086,2995,35,1866,
	1097,1075,1064,949,931,976,1230,1548,1258,1272,
	485,601,1503,2905,1857,1131,2663,1771,469,397,
	1686,1616,2914,2297,641,2621,2722,2678,2972,1317,
	2941,319,2584,2809,357,417,2833,2817,15,2593,
	365,281,263,1594,962,1634,1717,2001,1561,1804,
	427,441,1641,1475,1530,129,2694,2259,2416,673,
	1651,1668,
};
static const char *x86_64_syscall_i2s(int v) {
	return i2s_direct__(x86_64_syscall_strings, x86_64_syscall_i2s_direct, 0, 311, v);
}
