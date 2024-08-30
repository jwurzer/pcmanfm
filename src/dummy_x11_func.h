#ifndef DUMMY_X11_FUNC_H
#define DUMMY_X11_FUNC_H

Display *     gdk_x11_display_get_xdisplay     (GdkDisplay  *display)
{
	return NULL;
}

Display * 	gdk_x11_drawable_get_xdisplay (GdkDrawable *drawable)
{
	return NULL;
}

XID
gdk_x11_drawable_get_xid (GdkDrawable *drawable)
{
	return 0;
}

Window
gdk_x11_get_default_root_xwindow (void)
{
	Window w = 0;
	return w;
}

gint
gdk_x11_get_default_screen (void)
{
	return 0;
}

Display *
gdk_x11_get_default_xdisplay (void)
{
	return NULL;
}

GdkDrawable *gdk_x11_window_get_drawable_impl (GdkWindow *window)
{
	return NULL;
}

#endif

