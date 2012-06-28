/* This is a generated file, see Makefile.am for its inputs. */
static const char i386_syscall_strings[] = "_llseek\0_newselect\0_sysctl\0access\0acct\0add_key\0adjtimex\0afs_syscall\0alarm\0bdflush\0"
	"break\0brk\0capget\0capset\0chdir\0chmod\0chown\0chown32\0chroot\0clock_adjtime\0"
	"clock_getres\0clock_gettime\0clock_nanosleep\0clock_settime\0clone\0close\0creat\0create_module\0delete_module\0dup\0"
	"dup2\0dup3\0epoll_create\0epoll_create1\0epoll_ctl\0epoll_pwait\0epoll_wait\0eventfd\0eventfd2\0execve\0"
	"exit\0exit_group\0faccessat\0fadvise64\0fadvise64_64\0fallocate\0fanotify_init\0fanotify_mark\0fchdir\0fchmod\0"
	"fchmodat\0fchown\0fchown32\0fchownat\0fcntl\0fcntl64\0fdatasync\0fgetxattr\0flistxattr\0flock\0"
	"fork\0fremovexattr\0fsetxattr\0fstat\0fstat64\0fstatat64\0fstatfs\0fstatfs64\0fsync\0ftime\0"
	"ftruncate\0ftruncate64\0futex\0futimesat\0get_kernel_syms\0get_mempolicy\0get_robust_list\0get_thread_area\0getcpu\0getcwd\0"
	"getdents\0getdents64\0getegid\0getegid32\0geteuid\0geteuid32\0getgid\0getgid32\0getgroups\0getgroups32\0"
	"getitimer\0getpgid\0getpgrp\0getpid\0getpmsg\0getppid\0getpriority\0getresgid\0getresgid32\0getresuid\0"
	"getresuid32\0getrlimit\0getrusage\0getsid\0gettid\0gettimeofday\0getuid\0getuid32\0getxattr\0gtty\0"
	"idle\0init_module\0inotify_add_watch\0inotify_init\0inotify_init1\0inotify_rm_watch\0io_cancel\0io_destroy\0io_getevents\0io_setup\0"
	"io_submit\0ioctl\0ioperm\0iopl\0ioprio_get\0ioprio_set\0ipc\0keyctl\0kill\0lchown\0"
	"lchown32\0lgetxattr\0link\0linkat\0listxattr\0llistxattr\0lock\0lookup_dcookie\0lremovexattr\0lseek\0"
	"lsetxattr\0lstat\0lstat64\0madvise\0madvise1\0mbind\0migrate_pages\0mincore\0mkdir\0mkdirat\0"
	"mknod\0mknodat\0mlock\0mlockall\0mmap\0mmap2\0modify_ldt\0mount\0move_pages\0mprotect\0"
	"mpx\0mq_getsetattr\0mq_notify\0mq_open\0mq_timedreceive\0mq_timedsend\0mq_unlink\0mremap\0msync\0munlock\0"
	"munlockall\0munmap\0name_to_handle_at\0nanosleep\0nfsservctl\0nice\0oldfstat\0oldlstat\0oldolduname\0oldstat\0"
	"olduname\0open\0open_by_handle_at\0openat\0pause\0perf_event_open\0personality\0pipe\0pipe2\0pivot_root\0"
	"poll\0ppoll\0prctl\0pread64\0preadv\0prlimit64\0process_vm_readv\0process_vm_writev\0prof\0profil\0"
	"pselect6\0ptrace\0putpmsg\0pwrite64\0pwritev\0query_module\0quotactl\0read\0readahead\0readdir\0"
	"readlink\0readlinkat\0readv\0reboot\0recvmmsg\0remap_file_pages\0removexattr\0rename\0renameat\0request_key\0"
	"restart_syscall\0rmdir\0rt_sigaction\0rt_sigpending\0rt_sigprocmask\0rt_sigqueueinfo\0rt_sigreturn\0rt_sigsuspend\0rt_sigtimedwait\0rt_tgsigqueueinfo\0"
	"sched_get_priority_max\0sched_get_priority_min\0sched_getaffinity\0sched_getparam\0sched_getscheduler\0sched_rr_get_interval\0sched_setaffinity\0sched_setparam\0sched_setscheduler\0sched_yield\0"
	"select\0sendfile\0sendfile64\0sendmmsg\0set_mempolicy\0set_robust_list\0set_thread_area\0set_tid_address\0setdomainname\0setfsgid\0"
	"setfsgid32\0setfsuid\0setfsuid32\0setgid\0setgid32\0setgroups\0setgroups32\0sethostname\0setitimer\0setns\0"
	"setpgid\0setpriority\0setregid\0setregid32\0setresgid\0setresgid32\0setresuid\0setresuid32\0setreuid\0setreuid32\0"
	"setrlimit\0setsid\0settimeofday\0setuid\0setuid32\0setxattr\0sgetmask\0sigaction\0sigaltstack\0signal\0"
	"signalfd\0signalfd4\0sigpending\0sigprocmask\0sigreturn\0sigsuspend\0socketcall\0splice\0ssetmask\0stat\0"
	"stat64\0statfs\0statfs64\0stime\0stty\0swapoff\0swapon\0symlink\0symlinkat\0sync\0"
	"sync_file_range\0syncfs\0sys_kexec_load\0sysfs\0sysinfo\0syslog\0tee\0tgkill\0time\0timer_create\0"
	"timer_delete\0timer_getoverrun\0timer_gettime\0timer_settime\0timerfd\0timerfd_gettime\0timerfd_settime\0times\0tkill\0truncate\0"
	"truncate64\0ugetrlimit\0ulimit\0umask\0umount\0umount2\0uname\0unlink\0unlinkat\0unshare\0"
	"uselib\0ustat\0utime\0utimensat\0utimes\0vfork\0vhangup\0vm86\0vm86old\0vmsplice\0"
	"vserver\0wait4\0waitid\0waitpid\0write\0writev";
static const unsigned i386_syscall_s2i_s[] = {
	0,8,19,27,34,39,47,56,68,74,
	82,88,92,99,106,112,118,124,132,139,
	153,166,180,196,210,216,222,228,242,256,
	260,265,270,283,297,307,319,330,338,347,
	354,359,370,380,390,403,413,427,441,448,
	455,464,471,480,489,495,503,513,523,534,
	540,545,558,568,574,582,592,600,610,616,
	622,632,644,650,660,676,690,706,722,729,
	736,745,756,764,774,782,792,799,808,818,
	830,840,848,856,863,871,879,891,901,913,
	923,935,945,955,962,969,982,989,998,1007,
	1012,1017,1029,1047,1060,1074,1091,1101,1112,1125,
	1134,1144,1150,1157,1162,1173,1184,1188,1195,1200,
	1207,1216,1226,1231,1238,1248,1259,1264,1279,1292,
	1298,1308,1314,1322,1330,1339,1345,1359,1367,1373,
	1381,1387,1395,1401,1410,1415,1421,1432,1438,1449,
	1458,1462,1476,1486,1494,1510,1523,1533,1540,1546,
	1554,1565,1572,1590,1600,1611,1616,1625,1634,1646,
	1654,1663,1668,1686,1693,1699,1715,1727,1732,1738,
	1749,1754,1760,1766,1774,1781,1791,1808,1826,1831,
	1838,1847,1854,1862,1871,1879,1892,1901,1906,1916,
	1924,1933,1944,1950,1957,1966,1983,1995,2002,2011,
	2023,2039,2045,2058,2072,2087,2103,2116,2130,2146,
	2164,2187,2210,2228,2243,2262,2284,2302,2317,2336,
	2348,2355,2364,2375,2384,2398,2414,2430,2446,2460,
	2469,2480,2489,2500,2507,2516,2526,2538,2550,2560,
	2566,2574,2586,2595,2606,2616,2628,2638,2650,2659,
	2670,2680,2687,2700,2707,2716,2725,2734,2744,2756,
	2763,2772,2782,2793,2805,2815,2826,2837,2844,2853,
	2858,2865,2872,2881,2887,2892,2900,2907,2915,2925,
	2930,2946,2953,2968,2974,2982,2989,2993,3000,3005,
	3018,3031,3048,3062,3076,3084,3100,3116,3122,3128,
	3137,3148,3159,3166,3172,3179,3187,3193,3200,3209,
	3217,3224,3230,3236,3246,3253,3259,3267,3272,3280,
	3289,3297,3303,3310,3318,3324,
};
static const int i386_syscall_s2i_i[] = {
	140,142,149,33,51,286,124,137,27,134,
	17,45,184,185,12,15,182,212,61,343,
	266,265,267,264,120,6,8,127,129,41,
	63,330,254,329,255,319,256,323,328,11,
	1,252,307,250,272,324,338,339,133,94,
	306,95,207,298,55,221,148,231,234,143,
	2,237,228,108,197,300,100,269,118,35,
	93,194,240,299,130,275,312,244,318,183,
	141,220,50,202,49,201,47,200,80,205,
	105,132,65,20,188,64,96,171,211,165,
	209,76,77,147,224,78,24,199,229,32,
	112,128,292,291,332,293,249,246,247,245,
	248,54,101,110,290,289,117,288,37,16,
	198,230,9,303,232,233,53,253,236,19,
	227,107,196,219,219,274,294,218,39,296,
	14,297,150,152,90,192,123,21,317,125,
	56,282,281,277,280,279,278,163,144,151,
	153,91,341,162,169,34,28,84,59,18,
	109,5,342,295,29,336,136,42,331,217,
	168,309,172,180,333,340,347,348,44,98,
	308,26,189,181,334,167,131,3,225,89,
	85,305,145,88,337,257,235,38,302,287,
	0,40,174,176,175,178,173,179,177,335,
	159,160,242,155,157,161,241,154,156,158,
	82,187,239,345,276,311,243,258,121,139,
	216,138,215,46,214,81,206,74,104,346,
	57,97,71,204,170,210,164,208,70,203,
	75,66,79,23,213,226,68,67,186,48,
	321,327,73,126,119,72,102,313,69,106,
	195,99,268,25,31,115,87,83,304,36,
	314,344,283,135,116,103,315,270,13,259,
	263,262,261,260,322,326,325,43,238,92,
	193,191,58,60,22,52,122,10,301,310,
	86,62,30,320,271,190,111,166,113,316,
	273,114,284,7,4,146,
};
static int i386_syscall_s2i(const char *s, int *value) {
	size_t len, i;
	len = strlen(s);
	{ char copy[len + 1];
	for (i = 0; i < len; i++) {
		char c = s[i];
		copy[i] = GT_ISUPPER(c) ? c - 'A' + 'a' : c;
	}
	copy[i] = 0;
	return s2i__(i386_syscall_strings, i386_syscall_s2i_s, i386_syscall_s2i_i, 346, copy, value);
	}
}
static const unsigned i386_syscall_i2s_direct[] = {
	2023,354,540,1901,3318,1663,216,3310,222,1226,
	3193,347,106,3000,1381,112,1200,82,1646,1292,
	856,1432,3172,2700,982,2881,1847,68,1616,1693,
	3230,2887,1007,27,1611,616,2925,1195,1995,1367,
	2039,256,1727,3116,1826,88,2500,792,2756,774,
	756,34,3179,1259,1144,489,1458,2566,3159,1634,
	3166,132,3224,260,871,848,2680,2734,2725,2844,
	2650,2586,2815,2782,2538,2670,935,945,969,2687,
	808,2516,2348,2907,1625,1924,3217,2900,1950,1916,
	1410,1565,3128,622,448,464,879,2574,1831,2865,
	592,1150,2826,2982,2550,830,2853,1308,568,1654,
	1157,3259,1012,3272,3297,2892,2974,1184,610,2805,
	210,2446,3187,1421,47,1449,2793,228,1017,242,
	660,1892,840,441,74,2968,1715,56,2480,2460,
	0,736,8,534,1540,1944,3324,955,503,19,
	1395,1546,1401,1554,2302,2228,2317,2243,2336,2164,
	2187,2262,1590,1533,2628,913,3267,1879,1749,1600,
	2606,891,1760,2103,2045,2072,2058,2130,2087,2116,
	1766,1862,118,729,92,99,2744,2355,863,1854,
	3253,3148,1415,3137,632,2858,1314,574,1207,989,
	799,782,764,2659,2595,818,2526,471,2638,923,
	2616,901,124,2707,2507,2489,2469,1738,1359,1322,
	745,495,-1u,-1u,962,1906,2716,1298,558,998,
	1216,513,1238,1248,523,1983,1279,545,3122,2364,
	644,2284,2210,2414,706,1125,1101,1112,1134,1091,
	380,-1u,359,1264,270,297,319,1966,2430,3005,
	3062,3048,3031,3018,196,166,153,180,2872,600,
	2993,3246,390,3289,1339,676,2384,1486,1523,1510,
	1494,1476,1462,2953,3303,-1u,39,2011,1188,1173,
	1162,1047,1029,1074,1345,1686,1373,1387,480,650,
	582,3200,2002,1231,2915,1933,455,370,1838,1754,
	3209,2398,690,2837,2930,2989,3280,1438,722,307,
	3236,2763,3076,330,403,3100,3084,2772,338,283,
	265,1732,1060,1774,1871,2146,1699,1957,413,427,
	1781,1572,1668,139,2946,2375,2560,1791,1808,
};
static const char *i386_syscall_i2s(int v) {
	return i2s_direct__(i386_syscall_strings, i386_syscall_i2s_direct, 0, 348, v);
}
