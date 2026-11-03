/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_STACK_POINTER_H
#define __ASM_STACK_POINTER_H

/*
 * how to get the current stack pointer from C
 *
 * Newer clang rejects "register ... asm(\"sp\")" global register variables
 * ("register 'sp' unsuitable for global register variables on this target").
 * Read sp through a small inline-asm statement expression instead; this keeps
 * the existing value-style call sites (no parentheses) working unchanged.
 */
#define current_stack_pointer ({ \
	unsigned long __cur_sp; \
	asm volatile("mov %0, sp" : "=r" (__cur_sp)); \
	__cur_sp; \
})

#endif /* __ASM_STACK_POINTER_H */
