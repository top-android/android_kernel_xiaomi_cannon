/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef _UAPI_LINUX_CLOSE_RANGE_H
#define _UAPI_LINUX_CLOSE_RANGE_H

/*
 * close_range(2) flags (backported from Linux 5.9 / 5.11).
 * Values must match the userspace (bionic) definitions exactly.
 */
#define CLOSE_RANGE_UNSHARE	(1U << 1)
#define CLOSE_RANGE_CLOEXEC	(1U << 2)

#endif /* _UAPI_LINUX_CLOSE_RANGE_H */
