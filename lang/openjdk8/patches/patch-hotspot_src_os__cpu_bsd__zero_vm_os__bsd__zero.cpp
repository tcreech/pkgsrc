$NetBSD: patch-hotspot_src_os__cpu_bsd__zero_vm_os__bsd__zero.cpp,v 1.1 2015/03/24 14:24:38 joerg Exp $

clang objects to redefining builtins.

--- hotspot/src/os_cpu/bsd_zero/vm/os_bsd_zero.cpp.orig	2015-03-22 20:58:57.000000000 +0000
+++ hotspot/src/os_cpu/bsd_zero/vm/os_bsd_zero.cpp
@@ -446,21 +446,6 @@ extern "C" {
   }
 };
 
-/////////////////////////////////////////////////////////////////////////////
-// Implementations of atomic operations not supported by processors.
-//  -- http://gcc.gnu.org/onlinedocs/gcc-4.2.1/gcc/Atomic-Builtins.html
-
-#ifndef _LP64
-extern "C" {
-  long long unsigned int __sync_val_compare_and_swap_8(
-    volatile void *ptr,
-    long long unsigned int oldval,
-    long long unsigned int newval) {
-    ShouldNotCallThis();
-  }
-};
-#endif // !_LP64
-
 #ifndef PRODUCT
 void os::verify_stack_alignment() {
 }
