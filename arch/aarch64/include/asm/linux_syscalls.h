#ifndef __LINUX_SYSCALLS__
#define __LINUX_SYSCALLS__

#define __LNR_io_setup 0
#define __LNR_io_destroy 1
#define __LNR_io_submit 2
#define __LNR_io_cancel 3
#define __LNR_io_getevents 4
#define __LNR_setxattr 5
#define __LNR_lsetxattr 6
#define __LNR_fsetxattr 7
#define __LNR_getxattr 8
#define __LNR_lgetxattr 9
#define __LNR_fgetxattr 10
#define __LNR_listxattr 11
#define __LNR_llistxattr 12
#define __LNR_flistxattr 13
#define __LNR_removexattr 14
#define __LNR_lremovexattr 15
#define __LNR_fremovexattr 16
#define __LNR_getcwd 17
#define __LNR_lookup_dcookie 18
#define __LNR_eventfd2 19
#define __LNR_epoll_create1 20
#define __LNR_epoll_ctl 21
#define __LNR_epoll_pwait 22
#define __LNR_dup 23
#define __LNR_dup3 24
#define __LNR_fcntl 25
#define __LNR_inotify_init1 26
#define __LNR_inotify_add_watch 27
#define __LNR_inotify_rm_watch 28
#define __LNR_ioctl 29
#define __LNR_ioprio_set 30
#define __LNR_ioprio_get 31
#define __LNR_flock 32
#define __LNR_mknodat 33
#define __LNR_mkdirat 34
#define __LNR_unlinkat 35
#define __LNR_symlinkat 36
#define __LNR_linkat 37
#define __LNR_renameat 38
#define __LNR_umount2 39
#define __LNR_mount 40
#define __LNR_pivot_root 41
#define __LNR_nfsservctl 42
#define __LNR_statfs 43
#define __LNR_fstatfs 44
#define __LNR_truncate 45
#define __LNR_ftruncate 46
#define __LNR_fallocate 47
#define __LNR_faccessat 48
#define __LNR_chdir 49
#define __LNR_fchdir 50
#define __LNR_chroot 51
#define __LNR_fchmod 52
#define __LNR_fchmodat 53
#define __LNR_fchownat 54
#define __LNR_fchown 55
#define __LNR_openat 56
#define __LNR_close 57
#define __LNR_vhangup 58
#define __LNR_pipe2 59
#define __LNR_quotactl 60
#define __LNR_getdents64 61
#define __LNR_lseek 62
#define __LNR_read 63
#define __LNR_write 64
#define __LNR_readv 65
#define __LNR_writev 66
#define __LNR_pread64 67
#define __LNR_pwrite64 68
#define __LNR_preadv 69
#define __LNR_pwritev 70
#define __LNR_sendfile 71
#define __LNR_pselect6 72
#define __LNR_ppoll 73
#define __LNR_signalfd4 74
#define __LNR_vmsplice 75
#define __LNR_splice 76
#define __LNR_tee 77
#define __LNR_readlinkat 78
#define __LNR_newfstatat 79
#define __LNR_fstat 80
#define __LNR_sync 81
#define __LNR_fsync 82
#define __LNR_fdatasync 83
#define __LNR_sync_file_range 84
#define __LNR_timerfd_create 85
#define __LNR_timerfd_settime 86
#define __LNR_timerfd_gettime 87
#define __LNR_utimensat 88
#define __LNR_acct 89
#define __LNR_capget 90
#define __LNR_capset 91
#define __LNR_personality 92
#define __LNR_exit 93
#define __LNR_exit_group 94
#define __LNR_waitid 95
#define __LNR_set_tid_address 96
#define __LNR_unshare 97
#define __LNR_futex 98
#define __LNR_set_robust_list 99
#define __LNR_get_robust_list 100
#define __LNR_nanosleep 101
#define __LNR_getitimer 102
#define __LNR_setitimer 103
#define __LNR_kexec_load 104
#define __LNR_init_module 105
#define __LNR_delete_module 106
#define __LNR_timer_create 107
#define __LNR_timer_gettime 108
#define __LNR_timer_getoverrun 109
#define __LNR_timer_settime 110
#define __LNR_timer_delete 111
#define __LNR_clock_settime 112
#define __LNR_clock_gettime 113
#define __LNR_clock_getres 114
#define __LNR_clock_nanosleep 115
#define __LNR_syslog 116
#define __LNR_ptrace 117
#define __LNR_sched_setparam 118
#define __LNR_sched_setscheduler 119
#define __LNR_sched_getscheduler 120
#define __LNR_sched_getparam 121
#define __LNR_sched_setaffinity 122
#define __LNR_sched_getaffinity 123
#define __LNR_sched_yield 124
#define __LNR_sched_get_priority_max 125
#define __LNR_sched_get_priority_min 126
#define __LNR_sched_rr_get_interval 127
#define __LNR_restart_syscall 128
#define __LNR_kill 129
#define __LNR_tkill 130
#define __LNR_tgkill 131
#define __LNR_sigaltstack 132
#define __LNR_rt_sigsuspend 133
#define __LNR_rt_sigaction 134
#define __LNR_rt_sigprocmask 135
#define __LNR_rt_sigpending 136
#define __LNR_rt_sigtimedwait 137
#define __LNR_rt_sigqueueinfo 138
#define __LNR_rt_sigreturn 139
#define __LNR_setpriority 140
#define __LNR_getpriority 141
#define __LNR_reboot 142
#define __LNR_setregid 143
#define __LNR_setgid 144
#define __LNR_setreuid 145
#define __LNR_setuid 146
#define __LNR_setresuid 147
#define __LNR_getresuid 148
#define __LNR_setresgid 149
#define __LNR_getresgid 150
#define __LNR_setfsuid 151
#define __LNR_setfsgid 152
#define __LNR_times 153
#define __LNR_setpgid 154
#define __LNR_getpgid 155
#define __LNR_getsid 156
#define __LNR_setsid 157
#define __LNR_getgroups 158
#define __LNR_setgroups 159
#define __LNR_uname 160
#define __LNR_sethostname 161
#define __LNR_setdomainname 162
#define __LNR_getrlimit 163
#define __LNR_setrlimit 164
#define __LNR_getrusage 165
#define __LNR_umask 166
#define __LNR_prctl 167
#define __LNR_getcpu 168
#define __LNR_gettimeofday 169
#define __LNR_settimeofday 170
#define __LNR_adjtimex 171
#define __LNR_getpid 172
#define __LNR_getppid 173
#define __LNR_getuid 174
#define __LNR_geteuid 175
#define __LNR_getgid 176
#define __LNR_getegid 177
#define __LNR_gettid 178
#define __LNR_sysinfo 179
#define __LNR_mq_open 180
#define __LNR_mq_unlink 181
#define __LNR_mq_timedsend 182
#define __LNR_mq_timedreceive 183
#define __LNR_mq_notify 184
#define __LNR_mq_getsetattr 185
#define __LNR_msgget 186
#define __LNR_msgctl 187
#define __LNR_msgrcv 188
#define __LNR_msgsnd 189
#define __LNR_semget 190
#define __LNR_semctl 191
#define __LNR_semtimedop 192
#define __LNR_semop 193
#define __LNR_shmget 194
#define __LNR_shmctl 195
#define __LNR_shmat 196
#define __LNR_shmdt 197
#define __LNR_socket 198
#define __LNR_socketpair 199
#define __LNR_bind 200
#define __LNR_listen 201
#define __LNR_accept 202
#define __LNR_connect 203
#define __LNR_getsockname 204
#define __LNR_getpeername 205
#define __LNR_sendto 206
#define __LNR_recvfrom 207
#define __LNR_setsockopt 208
#define __LNR_getsockopt 209
#define __LNR_shutdown 210
#define __LNR_sendmsg 211
#define __LNR_recvmsg 212
#define __LNR_readahead 213
#define __LNR_brk 214
#define __LNR_munmap 215
#define __LNR_mremap 216
#define __LNR_add_key 217
#define __LNR_request_key 218
#define __LNR_keyctl 219
#define __LNR_clone 220
#define __LNR_execve 221
#define __LNR_mmap 222
#define __LNR_fadvise64 223
#define __LNR_swapon 224
#define __LNR_swapoff 225
#define __LNR_mprotect 226
#define __LNR_msync 227
#define __LNR_mlock 228
#define __LNR_munlock 229
#define __LNR_mlockall 230
#define __LNR_munlockall 231
#define __LNR_mincore 232
#define __LNR_madvise 233
#define __LNR_remap_file_pages 234
#define __LNR_mbind 235
#define __LNR_get_mempolicy 236
#define __LNR_set_mempolicy 237
#define __LNR_migrate_pages 238
#define __LNR_move_pages 239
#define __LNR_rt_tgsigqueueinfo 240
#define __LNR_perf_event_open 241
#define __LNR_accept4 242
#define __LNR_recvmmsg 243
#define __LNR_wait4 260
#define __LNR_prlimit64 261
#define __LNR_fanotify_init 262
#define __LNR_fanotify_mark 263
#define __LNR_name_to_handle_at 264
#define __LNR_open_by_handle_at 265
#define __LNR_clock_adjtime 266
#define __LNR_syncfs 267
#define __LNR_setns 268
#define __LNR_sendmmsg 269
#define __LNR_process_vm_readv 270
#define __LNR_process_vm_writev 271
#define __LNR_kcmp 272
#define __LNR_finit_module 273
#define __LNR_sched_setattr 274
#define __LNR_sched_getattr 275
#define __LNR_renameat2 276
#define __LNR_seccomp 277
#define __LNR_getrandom 278
#define __LNR_memfd_create 279
#define __LNR_bpf 280
#define __LNR_execveat 281
#define __LNR_userfaultfd 282
#define __LNR_membarrier 283
#define __LNR_mlock2 284
#define __LNR_copy_file_range 285
#define __LNR_preadv2 286
#define __LNR_pwritev2 287
#define __LNR_pkey_mprotect 288
#define __LNR_pkey_alloc 289
#define __LNR_pkey_free 290
#define __LNR_statx 291

#define __LNR_open 1024
#define __LNR_select 1067
#define __LNR_time 1062
#define __LNR_unlink 1026
#define __LNR_readlink 1035
#define __LNR_rmdir 1031
#define __LNR_mkdir 1030
#define __LNR_creat 1064
#define __LNR_getdents 1065
#define __LNR_access 1033
#define __LNR_lstat 1050

#endif