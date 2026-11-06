// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Minimal Xlib function declarations
// summary: Declares a small subset of Xlib functions, such as XOpenDisplay and XSetErrorHandler, without the full Xlib headers.
// ---

#ifndef UI_GFX_X_XLIB_H_
#define UI_GFX_X_XLIB_H_

extern "C" {
int XInitThreads(void);
struct _XDisplay* XOpenDisplay(const char*);
int XCloseDisplay(struct _XDisplay*);
int XFlush(struct _XDisplay*);
int XSynchronize(struct _XDisplay*, int);
int XSetErrorHandler(int (*)(void*, void*));
void XFree(void*);
int XPending(struct _XDisplay*);
}

#endif  // UI_GFX_X_XLIB_H_
