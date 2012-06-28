/* This is a generated file, see Makefile.am for its inputs. */
static const char s390x_syscall_strings[] = "_sysctl\0access\0acct\0add_key\0adjtimex\0afs_syscall\0alarm\0bdflush\0brk\0capget\0"
	"capset\0chdir\0chmod\0chown\0chroot\0clock_adjtime\0clock_getres\0clock_gettime\0clock_nanosleep\0clock_settime\0"
	"clone\0close\0creat\0create_module\0delete_module\0dup\0dup2\0dup3\0epoll_create\0epoll_create1\0"
	"epoll_ctl\0epoll_pwait\0epoll_wait\0eventfd\0eventfd2\0execve\0exit\0exit_group\0faccessat\0fadvise64\0"
	"fallocate\0fanotify_init\0fanotify_mark\0fchdir\0fchmod\0fchmodat\0fchown\0fchownat\0fcntl\0fdatasync\0"
	"fgetxattr\0flistxattr\0flock\0fork\0fremovexattr\0fsetxattr\0fstat\0fstatfs\0fstatfs64\0fsync\0"
	"ftruncate\0futex\0futimesat\0get_kernel_syms\0get_robust_list\0getcpu\0getcwd\0getdents\0getegid\0geteuid\0"
	"getgid\0getgroups\0getitimer\0getpgid\0getpgrp\0getpid\0getpmsg\0getppid\0getpriority\0getresgid\0"
	"getresuid\0getrlimit\0getrusage\0getsid\0gettid\0gettimeofday\0getuid\0getxattr\0idle\0init_module\0"
	"inotify_add_watch\0inotify_init\0inotify_init1\0inotify_rm_watch\0io_cancel\0io_destroy\0io_getevents\0io_setup\0io_submit\0ioctl\0"
	"ioprio_get\0ioprio_set\0ipc\0kexec_load\0keyctl\0kill\0lchown\0lgetxattr\0link\0linkat\0"
	"listxattr\0llistxattr\0lremovexattr\0lseek\0lsetxattr\0lstat\0madvise\0mincore\0mkdir\0mkdirat\0"
	"mknod\0mknodat\0mlock\0mlockall\0mmap\0mount\0mprotect\0mq_getsetattr\0mq_notify\0mq_open\0"
	"mq_timedreceive\0mq_timedsend\0mq_unlink\0mremap\0msync\0munlock\0munlockall\0munmap\0name_to_handle_at\0nanosleep\0"
	"newfstatat\0nfsservctl\0nice\0open\0open_by_handle_at\0openat\0pause\0perf_event_open\0personality\0pipe\0"
	"pipe2\0pivot_root\0poll\0ppoll\0prctl\0pread\0preadv\0prlimit64\0process_vm_readv\0process_vm_writev\0"
	"pselect6\0ptrace\0putpmsg\0pwrite\0pwritev\0query_module\0quotactl\0read\0readahead\0readdir\0"
	"readlink\0readlinkat\0readv\0reboot\0remap_file_pages\0removexattr\0rename\0renameat\0request_key\0rmdir\0"
	"rt_sigaction\0rt_sigpending\0rt_sigprocmask\0rt_sigqueueinfo\0rt_sigreturn\0rt_sigsuspend\0rt_sigtimedwait\0rt_tgsigqueueinfo\0sched_get_priority_max\0sched_get_priority_min\0"
	"sched_getaffinity\0sched_getparam\0sched_getscheduler\0sched_rr_get_interval\0sched_setaffinity\0sched_setparam\0sched_setscheduler\0sched_yield\0select\0sendfile\0"
	"set_robust_list\0set_tid_address\0setdomainname\0setfsgid\0setfsuid\0setgid\0setgroups\0sethostname\0setitimer\0setns\0"
	"setpgid\0setpriority\0setregid\0setresgid\0setresuid\0setreuid\0setrlimit\0setsid\0settimeofday\0setuid\0"
	"setxattr\0sigaction\0sigaltstack\0signal\0signalfd\0signalfd4\0sigpending\0sigprocmask\0sigreturn\0sigsuspend\0"
	"socketcall\0splice\0stat\0statfs\0statfs64\0swapoff\0swapon\0symlink\0symlinkat\0sync\0"
	"sync_file_range\0syncfs\0sysfs\0sysinfo\0syslog\0tee\0tgkill\0timer_create\0timer_delete\0timer_getoverrun\0"
	"timer_gettime\0timer_settime\0timerfd\0timerfd_create\0timerfd_gettime\0timerfd_settime\0times\0tkill\0truncate\0umask\0"
	"umount\0umount2\0uname\0unlink\0unlinkat\0unshare\0uselib\0ustat\0utime\0utimensat\0"
	"utimes\0vfork\0vhangup\0vmsplice\0wait4\0waitid\0write\0writev";
static const unsigned s390x_syscall_s2i_s[] = {
	0,8,15,20,28,37,49,55,63,67,
	74,81,87,93,99,106,120,133,147,163,
	177,183,189,195,209,223,227,232,237,250,
	264,274,286,297,305,314,321,326,337,347,
	357,367,381,395,402,409,418,425,434,440,
	450,460,471,477,482,495,505,511,519,529,
	535,545,551,561,577,593,600,607,616,624,
	632,639,649,659,667,675,682,690,698,710,
	720,730,740,750,757,764,777,784,793,798,
	810,828,841,855,872,882,893,906,915,925,
	931,942,953,957,968,975,980,987,997,1002,
	1009,1019,1030,1043,1049,1059,1065,1073,1081,1087,
	1095,1101,1109,1115,1124,1129,1135,1144,1158,1168,
	1176,1192,1205,1215,1222,1228,1236,1247,1254,1272,
	1282,1293,1304,1309,1314,1332,1339,1345,1361,1373,
	1378,1384,1395,1400,1406,1412,1418,1425,1435,1452,
	1470,1479,1486,1494,1501,1509,1522,1531,1536,1546,
	1554,1563,1574,1580,1587,1604,1616,1623,1632,1644,
	1650,1663,1677,1692,1708,1721,1735,1751,1769,1792,
	1815,1833,1848,1867,1889,1907,1922,1941,1953,1960,
	1969,1985,2001,2015,2024,2033,2040,2050,2062,2072,
	2078,2086,2098,2107,2117,2127,2136,2146,2153,2166,
	2173,2182,2192,2204,2211,2220,2230,2241,2253,2263,
	2274,2285,2292,2297,2304,2313,2321,2328,2336,2346,
	2351,2367,2374,2380,2388,2395,2399,2406,2419,2432,
	2449,2463,2477,2485,2500,2516,2532,2538,2544,2553,
	2559,2566,2574,2580,2587,2596,2604,2611,2617,2623,
	2633,2640,2646,2654,2663,2669,2676,2682,
};
static const int s390x_syscall_s2i_i[] = {
	149,33,51,278,124,137,27,134,45,184,
	185,12,15,212,61,337,261,260,262,259,
	120,6,8,127,129,41,63,326,249,327,
	250,312,251,318,323,11,1,248,300,253,
	314,332,333,133,94,299,207,291,55,148,
	229,232,143,2,235,226,108,100,266,118,
	93,238,292,130,305,311,183,141,202,201,
	200,205,105,132,65,20,188,64,96,211,
	209,191,77,147,236,78,199,227,112,128,
	285,284,324,286,247,244,245,243,246,54,
	283,282,117,277,280,37,198,228,9,296,
	230,231,234,19,225,107,219,218,39,289,
	14,290,150,152,90,21,125,276,275,271,
	274,273,272,163,144,151,153,91,335,162,
	293,169,34,5,336,288,29,331,136,42,
	325,217,168,302,172,180,328,334,340,341,
	301,26,189,181,329,167,131,3,222,89,
	85,298,145,88,267,233,38,295,279,40,
	174,176,175,178,173,179,177,330,159,160,
	240,155,157,161,239,154,156,158,142,187,
	304,252,121,216,215,214,206,74,104,339,
	57,97,204,210,208,203,75,66,79,213,
	224,67,186,48,316,322,73,126,119,72,
	102,306,106,99,265,115,87,83,297,36,
	307,338,135,116,103,308,241,254,258,257,
	256,255,317,319,321,320,43,237,92,60,
	22,52,122,10,294,303,86,62,30,315,
	313,190,111,309,114,281,4,146,
};
static int s390x_syscall_s2i(const char *s, int *value) {
	size_t len, i;
	len = strlen(s);
	{ char copy[len + 1];
	for (i = 0; i < len; i++) {
		char c = s[i];
		copy[i] = GT_ISUPPER(c) ? c - 'A' + 'a' : c;
	}
	copy[i] = 0;
	return s2i__(s390x_syscall_strings, s390x_syscall_s2i_s, s390x_syscall_s2i_i, 278, copy, value);
	}
}
static const unsigned s390x_syscall_i2s_direct[] = {
	321,477,1531,2676,1309,183,-1u,189,997,2580,
	314,81,-1u,1095,87,-1u,-1u,-1u,1043,675,
	1129,2559,-1u,-1u,-1u,1479,49,-1u,1339,2617,
	-1u,-1u,8,1304,-1u,2346,975,1616,1081,1644,
	223,1373,2532,-1u,63,-1u,-1u,2204,-1u,-1u,
	15,2566,-1u,925,434,-1u,2078,-1u,-1u,2553,
	99,2611,227,690,667,2146,2182,-1u,-1u,-1u,
	-1u,2263,2230,2050,2136,-1u,740,764,2153,-1u,
	-1u,-1u,2328,-1u,1554,2604,2321,1580,1546,1124,
	1247,2544,535,402,-1u,698,2086,-1u,2297,511,
	-1u,2274,2388,2062,649,2292,1059,505,-1u,-1u,
	2646,793,-1u,2663,2313,2380,953,529,2253,177,
	2001,2574,-1u,28,1135,2241,195,798,209,561,
	1522,659,395,55,2374,1361,37,-1u,-1u,-1u,
	607,1953,471,1222,1574,2682,750,440,0,1109,
	1228,1115,1236,1907,1833,1922,1848,1941,1769,1792,
	1867,1272,1215,-1u,-1u,-1u,1509,1395,1293,-1u,
	-1u,1406,1708,1650,1677,1663,1735,1692,1721,1412,
	1494,-1u,600,67,74,2192,1960,682,1486,2640,
	730,-1u,-1u,-1u,-1u,-1u,-1u,980,777,632,
	624,616,2127,2098,639,2040,418,2117,720,2107,
	710,93,2166,2033,2024,2015,1384,1073,1065,-1u,
	-1u,1536,-1u,2173,1049,495,784,987,450,1009,
	1019,460,1604,1030,482,757,2538,545,1889,1815,
	2399,-1u,906,882,893,915,872,326,237,264,
	286,1985,347,2406,2463,2449,2432,2419,163,133,
	120,147,-1u,-1u,2304,519,1587,-1u,-1u,-1u,
	1168,1205,1192,1176,1158,1144,957,20,1632,968,
	2669,942,931,828,810,855,-1u,1332,1087,1101,
	425,551,1282,2587,1623,1002,2336,1563,409,337,
	1470,1400,2596,1969,577,2285,2351,2395,2654,-1u,
	593,274,2633,357,2623,2211,2477,297,2485,2516,
	2500,2220,305,841,1378,232,250,1418,1501,1751,
	1345,367,381,1425,1254,1314,106,2367,2072,1435,
	1452,
};
static const char *s390x_syscall_i2s(int v) {
	return i2s_direct__(s390x_syscall_strings, s390x_syscall_i2s_direct, 1, 341, v);
}
