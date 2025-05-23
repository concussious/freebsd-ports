--- remoting/host/remote_open_url/remote_open_url_util.cc.orig	2025-05-07 06:48:23 UTC
+++ remoting/host/remote_open_url/remote_open_url_util.cc
@@ -29,7 +29,7 @@ const wchar_t kRegisteredApplicationsKeyName[] =
 #endif  // BUILDFLAG(IS_WIN)
 
 bool IsRemoteOpenUrlSupported() {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return true;
 #elif BUILDFLAG(IS_WIN)
   // The MSI installs the ProgID and capabilities into registry, but not the
