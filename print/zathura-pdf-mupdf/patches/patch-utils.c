$NetBSD: patch-utils.c,v 1.1 2016/04/27 12:38:45 leot Exp $

Update to mupdf-1.9 API.

--- utils.c.orig	2016-02-14 22:49:46.000000000 +0000
+++ utils.c
@@ -14,7 +14,7 @@ mupdf_page_extract_text(mupdf_document_t
   fz_device* text_device = NULL;
 
   fz_try (mupdf_page->ctx) {
-    text_device = fz_new_text_device(mupdf_page->ctx, mupdf_page->sheet, mupdf_page->text);
+    text_device = fz_new_stext_device(mupdf_page->ctx, mupdf_page->sheet, mupdf_page->text);
 
     /* Disable FZ_IGNORE_IMAGE to collect image blocks */
     fz_disable_device_hints(mupdf_page->ctx, text_device, FZ_IGNORE_IMAGE);
