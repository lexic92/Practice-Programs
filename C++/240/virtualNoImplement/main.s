	.file	"main.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"function"
	.section	.text._ZN1A8functionEv,"axG",@progbits,_ZN1A8functionEv,comdat
	.align 2
	.weak	_ZN1A8functionEv
	.type	_ZN1A8functionEv, @function
_ZN1A8functionEv:
.LFB957:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$.LC0, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEPFRSoS_E
	leave
	ret
	.cfi_endproc
.LFE957:
	.size	_ZN1A8functionEv, .-_ZN1A8functionEv
	.section	.rodata
.LC1:
	.string	"classB function2"
	.section	.text._ZN1B9function2Ev,"axG",@progbits,_ZN1B9function2Ev,comdat
	.align 2
	.weak	_ZN1B9function2Ev
	.type	_ZN1B9function2Ev, @function
_ZN1B9function2Ev:
.LFB958:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$.LC1, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEPFRSoS_E
	leave
	ret
	.cfi_endproc
.LFE958:
	.size	_ZN1B9function2Ev, .-_ZN1B9function2Ev
	.section	.text._ZN1AC2Ev,"axG",@progbits,_ZN1AC2Ev,comdat
	.align 2
	.weak	_ZN1AC2Ev
	.type	_ZN1AC2Ev, @function
_ZN1AC2Ev:
.LFB962:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	movl	$_ZTV1A+8, (%eax)
	popl	%ebp
	ret
	.cfi_endproc
.LFE962:
	.size	_ZN1AC2Ev, .-_ZN1AC2Ev
	.section	.text._ZN1AC1Ev,"axG",@progbits,_ZN1AC1Ev,comdat
	.align 2
	.weak	_ZN1AC1Ev
	.type	_ZN1AC1Ev, @function
_ZN1AC1Ev:
.LFB963:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	movl	$_ZTV1A+8, (%eax)
	popl	%ebp
	ret
	.cfi_endproc
.LFE963:
	.size	_ZN1AC1Ev, .-_ZN1AC1Ev
	.section	.text._ZN1BC1Ev,"axG",@progbits,_ZN1BC1Ev,comdat
	.align 2
	.weak	_ZN1BC1Ev
	.type	_ZN1BC1Ev, @function
_ZN1BC1Ev:
.LFB965:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN1AC2Ev
	movl	8(%ebp), %eax
	movl	$_ZTV1B+8, (%eax)
	leave
	ret
	.cfi_endproc
.LFE965:
	.size	_ZN1BC1Ev, .-_ZN1BC1Ev
	.text
.globl main
	.type	main, @function
main:
.LFB959:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	pushl	%ebx
	subl	$44, %esp
	movl	$4, (%esp)
	.cfi_escape 0x10,0x3,0x7,0x55,0x9,0xf0,0x1a,0x9,0xfc,0x22
	call	_Znwj
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, (%esp)
	call	_ZN1BC1Ev
	movl	%ebx, %eax
	movl	%eax, 28(%esp)
	movl	28(%esp), %eax
	movl	(%eax), %eax
	addl	$4, %eax
	movl	(%eax), %edx
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	*%edx
	movl	$4, (%esp)
	call	_Znwj
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, (%esp)
	call	_ZN1AC1Ev
.L13:
	movl	%ebx, 24(%esp)
	movl	24(%esp), %eax
	movl	(%eax), %eax
	addl	$4, %eax
	movl	(%eax), %edx
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	*%edx
	movl	$0, %eax
.L14:
	addl	$44, %esp
	popl	%ebx
	movl	%ebp, %esp
	popl	%ebp
	ret
	.cfi_endproc
.LFE959:
	.size	main, .-main
	.weak	_ZTV1B
	.section	.rodata._ZTV1B,"aG",@progbits,_ZTV1B,comdat
	.align 8
	.type	_ZTV1B, @object
	.size	_ZTV1B, 16
_ZTV1B:
	.long	0
	.long	_ZTI1B
	.long	_ZN1A8functionEv
	.long	_ZN1B9function2Ev
	.weak	_ZTS1B
	.section	.rodata._ZTS1B,"aG",@progbits,_ZTS1B,comdat
	.type	_ZTS1B, @object
	.size	_ZTS1B, 3
_ZTS1B:
	.string	"1B"
	.weak	_ZTI1B
	.section	.rodata._ZTI1B,"aG",@progbits,_ZTI1B,comdat
	.align 4
	.type	_ZTI1B, @object
	.size	_ZTI1B, 12
_ZTI1B:
	.long	_ZTVN10__cxxabiv120__si_class_type_infoE+8
	.long	_ZTS1B
	.long	_ZTI1A
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB974:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	.L18
	cmpl	$65535, 12(%ebp)
	jne	.L18
	movl	$_ZStL8__ioinit, (%esp)
	call	_ZNSt8ios_base4InitC1Ev
	movl	$_ZNSt8ios_base4InitD1Ev, %eax
	movl	$__dso_handle, 8(%esp)
	movl	$_ZStL8__ioinit, 4(%esp)
	movl	%eax, (%esp)
	call	__cxa_atexit
.L18:
	leave
	ret
	.cfi_endproc
.LFE974:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__I_main, @function
_GLOBAL__I_main:
.LFB975:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	_Z41__static_initialization_and_destruction_0ii
	leave
	ret
	.cfi_endproc
.LFE975:
	.size	_GLOBAL__I_main, .-_GLOBAL__I_main
	.section	.ctors,"aw",@progbits
	.align 4
	.long	_GLOBAL__I_main
	.weakref	_ZL20__gthrw_pthread_oncePiPFvvE,pthread_once
	.weakref	_ZL27__gthrw_pthread_getspecificj,pthread_getspecific
	.weakref	_ZL27__gthrw_pthread_setspecificjPKv,pthread_setspecific
	.weakref	_ZL22__gthrw_pthread_createPmPK14pthread_attr_tPFPvS3_ES3_,pthread_create
	.weakref	_ZL20__gthrw_pthread_joinmPPv,pthread_join
	.weakref	_ZL21__gthrw_pthread_equalmm,pthread_equal
	.weakref	_ZL20__gthrw_pthread_selfv,pthread_self
	.weakref	_ZL22__gthrw_pthread_detachm,pthread_detach
	.weakref	_ZL22__gthrw_pthread_cancelm,pthread_cancel
	.weakref	_ZL19__gthrw_sched_yieldv,sched_yield
	.weakref	_ZL26__gthrw_pthread_mutex_lockP15pthread_mutex_t,pthread_mutex_lock
	.weakref	_ZL29__gthrw_pthread_mutex_trylockP15pthread_mutex_t,pthread_mutex_trylock
	.weakref	_ZL31__gthrw_pthread_mutex_timedlockP15pthread_mutex_tPK8timespec,pthread_mutex_timedlock
	.weakref	_ZL28__gthrw_pthread_mutex_unlockP15pthread_mutex_t,pthread_mutex_unlock
	.weakref	_ZL26__gthrw_pthread_mutex_initP15pthread_mutex_tPK19pthread_mutexattr_t,pthread_mutex_init
	.weakref	_ZL29__gthrw_pthread_mutex_destroyP15pthread_mutex_t,pthread_mutex_destroy
	.weakref	_ZL30__gthrw_pthread_cond_broadcastP14pthread_cond_t,pthread_cond_broadcast
	.weakref	_ZL27__gthrw_pthread_cond_signalP14pthread_cond_t,pthread_cond_signal
	.weakref	_ZL25__gthrw_pthread_cond_waitP14pthread_cond_tP15pthread_mutex_t,pthread_cond_wait
	.weakref	_ZL30__gthrw_pthread_cond_timedwaitP14pthread_cond_tP15pthread_mutex_tPK8timespec,pthread_cond_timedwait
	.weakref	_ZL28__gthrw_pthread_cond_destroyP14pthread_cond_t,pthread_cond_destroy
	.weakref	_ZL26__gthrw_pthread_key_createPjPFvPvE,pthread_key_create
	.weakref	_ZL26__gthrw_pthread_key_deletej,pthread_key_delete
	.weakref	_ZL30__gthrw_pthread_mutexattr_initP19pthread_mutexattr_t,pthread_mutexattr_init
	.weakref	_ZL33__gthrw_pthread_mutexattr_settypeP19pthread_mutexattr_ti,pthread_mutexattr_settype
	.weakref	_ZL33__gthrw_pthread_mutexattr_destroyP19pthread_mutexattr_t,pthread_mutexattr_destroy
	.ident	"GCC: (Ubuntu 4.4.3-4ubuntu5) 4.4.3"
	.section	.note.GNU-stack,"",@progbits
