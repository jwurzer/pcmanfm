#ifndef GDESKTOPAPPINFO_WRAPPER_H
#define GDESKTOPAPPINFO_WRAPPER_H

#include <gio/gosxappinfo.h>


//GDesktopAppInfo *g_desktop_app_info_new (const char *desktop_id);
//GOsxAppInfo *g_osx_app_info_new(const char *desktop_id); // doesn't exist
#define g_desktop_app_info_new(desktop_id) dummy_osx_app_info_new(desktop_id)

static GOsxAppInfo *dummy_osx_app_info_new(const char *desktop_id)
{
	return NULL;
}

#endif

