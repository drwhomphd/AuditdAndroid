/* This is a generated file, see Makefile.am for its inputs. */
static const char s390_syscall_strings[] = "_llseek\0_newselect\0_sysctl\0access\0acct\0add_key\0adjtimex\0afs_syscall\0alarm\0bdflush\0"
	"brk\0capget\0capset\0chdir\0chmod\0chown\0chown32\0chroot\0clock_adjtime\0clock_getres\0"
	"clock_gettime\0clock_nanosleep\0clock_settime\0clone\0close\0creat\0create_module\0delete_module\0dup\0dup2\0"
	"dup3\0epoll_create\0epoll_create1\0epoll_ctl\0epoll_pwait\0epoll_wait\0eventfd\0eventfd2\0execve\0exit\0"
	"exit_group\0faccessat\0fadvise64\0fadvise64_64\0fallocate\0fanotify_init\0fanotify_mark\0fchdir\0fchmod\0fchmodat\0"
	"fchown\0fchown32\0fchownat\0fcntl\0fcntl64\0fdatasync\0fgetxattr\0flistxattr\0flock\0fork\0"
	"fremovexattr\0fsetxattr\0fstat\0fstat64\0fstatat\0fstatfs\0fstatfs64\0fsync\0ftruncate\0ftruncate64\0"
	"futex\0futimesat\0get_kernel_syms\0get_robust_list\0getcpu\0getcwd\0getdents\0getdents64\0getegid\0getegid32\0"
	"geteuid\0geteuid32\0getgid\0getgid32\0getgroups\0getgroups32\0getitimer\0getpgid\0getpgrp\0getpid\0"
	"getpmsg\0getppid\0getpriority\0getresgid\0getresgid32\0getresuid\0getresuid32\0getrlimit\0getrusage\0getsid\0"
	"gettid\0gettimeofday\0getuid\0getuid32\0getxattr\0idle\0init_module\0inotify_add_watch\0inotify_init\0inotify_init1\0"
	"inotify_rm_watch\0io_cancel\0io_destroy\0io_getevents\0io_setup\0io_submit\0ioctl\0ioperm\0ioprio_get\0ioprio_set\0"
	"ipc\0kexec_load\0keyctl\0kill\0lchown\0lchown32\0lgetxattr\0link\0linkat\0listxattr\0"
	"llistxattr\0lremovexattr\0lseek\0lsetxattr\0lstat\0lstat64\0madvise\0mincore\0mkdir\0mkdirat\0"
	"mknod\0mknodat\0mlock\0mlockall\0mmap\0mmap2\0mount\0mprotect\0mq_getsetattr\0mq_notify\0"
	"mq_open\0mq_timedreceive\0mq_timedsend\0mq_unlink\0mremap\0msync\0munlock\0munlockall\0munmap\0name_to_handle_at\0"
	"nanosleep\0nfsservctl\0nice\0open\0open_by_handle_at\0openat\0pause\0perf_event_open\0personality\0pipe\0"
	"pipe2\0pivot_root\0poll\0ppoll\0prctl\0pread\0preadv\0prlimit64\0process_vm_readv\0process_vm_writev\0"
	"pselect6\0ptrace\0putpmsg\0pwrite\0pwritev\0query_module\0quotactl\0read\0readahead\0readdir\0"
	"readlink\0readlinkat\0readv\0reboot\0remap_file_pages\0removexattr\0rename\0renameat\0request_key\0rmdir\0"
	"rt_sigaction\0rt_sigpending\0rt_sigprocmask\0rt_sigqueueinfo\0rt_sigreturn\0rt_sigsuspend\0rt_sigtimedwait\0rt_tgsigqueueinfo\0sched_get_priority_max\0sched_get_priority_min\0"
	"sched_getaffinity\0sched_getparam\0sched_getscheduler\0sched_rr_get_interval\0sched_setaffinity\0sched_setparam\0sched_setscheduler\0sched_yield\0sendfile\0sendfile64\0"
	"set_robust_list\0set_tid_address\0setdomainname\0setfsgid\0setfsgid32\0setfsuid\0setfsuid32\0setgid\0setgid32\0setgroups\0"
	"setgroups32\0sethostname\0setitimer\0setns\0setpgid\0setpriority\0setregid\0setregid32\0setresgid\0setresgid32\0"
	"setresuid\0setresuid32\0setreuid\0setreuid32\0setrlimit\0setsid\0settimeofday\0setuid\0setuid32\0setxattr\0"
	"sigaction\0sigaltstack\0signal\0signalfd\0signalfd4\0sigpending\0sigprocmask\0sigreturn\0sigsuspend\0socketcall\0"
	"splice\0stat\0stat64\0statfs\0statfs64\0stime\0swapoff\0swapon\0symlink\0symlinkat\0"
	"sync\0sync_file_range\0syncfs\0sysfs\0sysinfo\0syslog\0tee\0tgkill\0time\0timer_create\0"
	"timer_delete\0timer_getoverrun\0timer_gettime\0timer_settime\0timerfd\0timerfd_create\0timerfd_gettime\0timerfd_settime\0times\0tkill\0"
	"truncate\0truncate64\0ugetrlimit\0umask\0umount\0umount2\0uname\0unlink\0unlinkat\0unshare\0"
	"uselib\0ustat\0utime\0utimensat\0utimes\0vfork\0vhangup\0vmsplice\0wait4\0waitid\0"
	"write\0writev";
static const unsigned s390_syscall_s2i_s[] = {
	0,8,19,27,34,39,47,56,68,74,
	82,86,93,100,106,112,118,126,133,147,
	160,174,190,204,210,216,222,236,250,254,
	259,264,277,291,301,313,324,332,341,348,
	353,364,374,384,397,407,421,435,442,449,
	458,465,474,483,489,497,507,517,528,534,
	539,552,562,568,576,584,592,602,608,618,
	630,636,646,662,678,685,692,701,712,720,
	730,738,748,755,764,774,786,796,804,812,
	819,827,835,847,857,869,879,891,901,911,
	918,925,938,945,954,963,968,980,998,1011,
	1025,1042,1052,1063,1076,1085,1095,1101,1108,1119,
	1130,1134,1145,1152,1157,1164,1173,1183,1188,1195,
	1205,1216,1229,1235,1245,1251,1259,1267,1275,1281,
	1289,1295,1303,1309,1318,1323,1329,1335,1344,1358,
	1368,1376,1392,1405,1415,1422,1428,1436,1447,1454,
	1472,1482,1493,1498,1503,1521,1528,1534,1550,1562,
	1567,1573,1584,1589,1595,1601,1607,1614,1624,1641,
	1659,1668,1675,1683,1690,1698,1711,1720,1725,1735,
	1743,1752,1763,1769,1776,1793,1805,1812,1821,1833,
	1839,1852,1866,1881,1897,1910,1924,1940,1958,1981,
	2004,2022,2037,2056,2078,2096,2111,2130,2142,2151,
	2162,2178,2194,2208,2217,2228,2237,2248,2255,2264,
	2274,2286,2298,2308,2314,2322,2334,2343,2354,2364,
	2376,2386,2398,2407,2418,2428,2435,2448,2455,2464,
	2473,2483,2495,2502,2511,2521,2532,2544,2554,2565,
	2576,2583,2588,2595,2602,2611,2617,2625,2632,2640,
	2650,2655,2671,2678,2684,2692,2699,2703,2710,2715,
	2728,2741,2758,2772,2786,2794,2809,2825,2841,2847,
	2853,2862,2873,2884,2890,2897,2905,2911,2918,2927,
	2935,2942,2948,2954,2964,2971,2977,2985,2994,3000,
	3007,3013,
};
static const int s390_syscall_s2i_i[] = {
	140,142,149,33,51,278,124,137,27,134,
	45,184,185,12,15,182,212,61,337,261,
	260,262,259,120,6,8,127,129,41,63,
	326,249,327,250,312,251,318,323,11,1,
	248,300,253,264,314,332,333,133,94,299,
	95,207,291,55,221,148,229,232,143,2,
	235,226,108,197,293,100,266,118,93,194,
	238,292,130,305,311,183,141,220,50,202,
	49,201,47,200,80,205,105,132,65,20,
	188,64,96,171,211,165,209,76,77,147,
	236,78,24,199,227,112,128,285,284,324,
	286,247,244,245,243,246,54,101,283,282,
	117,277,280,37,16,198,228,9,296,230,
	231,234,19,225,107,196,219,218,39,289,
	14,290,150,152,90,192,21,125,276,275,
	271,274,273,272,163,144,151,153,91,335,
	162,169,34,5,336,288,29,331,136,42,
	325,217,168,302,172,180,328,334,340,341,
	301,26,189,181,329,167,131,3,222,89,
	85,298,145,88,267,233,38,295,279,40,
	174,176,175,178,173,179,177,330,159,160,
	240,155,157,161,239,154,156,158,187,223,
	304,252,121,139,216,138,215,46,214,81,
	206,74,104,339,57,97,71,204,170,210,
	164,208,70,203,75,66,79,23,213,224,
	67,186,48,316,322,73,126,119,72,102,
	306,106,195,99,265,25,115,87,83,297,
	36,307,338,135,116,103,308,241,13,254,
	258,257,256,255,317,319,321,320,43,237,
	92,193,191,60,22,52,122,10,294,303,
	86,62,30,315,313,190,111,309,114,281,
	4,146,
};
static int s390_syscall_s2i(const char *s, int *value) {
	size_t len, i;
	len = strlen(s);
	{ char copy[len + 1];
	for (i = 0; i < len; i++) {
		char c = s[i];
		copy[i] = GT_ISUPPER(c) ? c - 'A' + 'a' : c;
	}
	copy[i] = 0;
	return s2i__(s390_syscall_strings, s390_syscall_s2i_s, s390_syscall_s2i_i, 312, copy, value);
	}
}
static const unsigned s390_syscall_i2s_direct[] = {
	348,534,1720,3007,1498,210,-1u,216,1183,2911,
	341,100,2710,1289,106,1157,-1u,-1u,1229,812,
	1329,2890,2448,938,2611,1668,68,-1u,1528,2948,
	-1u,-1u,27,1493,-1u,2650,1152,1805,1275,1833,
	250,1562,2841,-1u,82,2248,748,2495,730,712,
	34,2897,-1u,1095,483,-1u,2314,-1u,-1u,2884,
	126,2942,254,827,804,2428,2473,-1u,-1u,2398,
	2334,2554,2521,2286,2418,891,901,925,2435,764,
	2264,-1u,2632,-1u,1743,2935,2625,1769,1735,1318,
	1447,2853,608,442,458,835,2322,-1u,2595,584,
	1101,2565,2692,2298,786,2583,1245,562,-1u,-1u,
	2977,963,-1u,2994,2617,2684,1130,602,2544,204,
	2194,2905,-1u,47,1335,2532,222,968,236,646,
	1711,796,435,74,2678,1550,56,2228,2208,0,
	692,8,528,1422,1763,3013,911,497,19,1303,
	1428,1309,1436,2096,2022,2111,2037,2130,1958,1981,
	2056,1472,1415,2376,869,-1u,1698,1584,1482,2354,
	847,1595,1897,1839,1866,1852,1924,1881,1910,1601,
	1683,112,685,86,93,2483,2142,819,1675,2971,
	2873,1323,2862,618,2588,1251,568,1164,945,755,
	738,720,2407,2343,774,2274,465,2386,879,2364,
	857,118,2455,2255,2237,2217,1573,1267,1259,701,
	489,1725,2151,2464,1235,552,954,1173,507,1195,
	1205,517,1793,1216,539,918,2847,630,2078,2004,
	2703,-1u,1076,1052,1063,1085,1042,353,264,291,
	313,2178,374,2715,2772,2758,2741,2728,190,160,
	147,174,-1u,384,2602,592,1776,-1u,-1u,-1u,
	1368,1405,1392,1376,1358,1344,1134,39,1821,1145,
	3000,1119,1108,998,980,1025,-1u,1521,1281,1295,
	474,636,576,2918,1812,1188,2640,1752,449,364,
	1659,1589,2927,2162,662,2576,2655,2699,2985,-1u,
	678,301,2964,397,2954,2502,2786,324,2794,2825,
	2809,2511,332,1011,1567,259,277,1607,1690,1940,
	1534,407,421,1614,1454,1503,133,2671,2308,1624,
	1641,
};
static const char *s390_syscall_i2s(int v) {
	return i2s_direct__(s390_syscall_strings, s390_syscall_i2s_direct, 1, 341, v);
}
