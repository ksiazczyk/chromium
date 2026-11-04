// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Software canvas holder declaration
// summary: Declares the SoftwareCanvasHolder interface and the function that registers the software draw function table used for Java canvas rendering.
// relations:
//   - depends_on /base/android/jni_android.h
//   - depends_on /ui/gfx/geometry/point.h
//   - depends_on /ui/gfx/geometry/size.h
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_GFX_JAVA_BROWSER_VIEW_RENDERER_HELPER_H_
#define ANDROID_WEBVIEW_BROWSER_GFX_JAVA_BROWSER_VIEW_RENDERER_HELPER_H_

#include <jni.h>

#include <memory>

#include "base/android/jni_android.h"
#include "ui/gfx/geometry/point.h"
#include "ui/gfx/geometry/size.h"

class SkCanvas;
struct AwDrawSWFunctionTable;

namespace android_webview {

// Lifetime: Temporary
class SoftwareCanvasHolder {
 public:
  static std::unique_ptr<SoftwareCanvasHolder> Create(
      const base::android::JavaRef<jobject>& java_canvas,
      const gfx::Point& scroll_correction,
      const gfx::Size& auxiliary_bitmap_size,
      bool force_auxiliary_bitmap);

  virtual ~SoftwareCanvasHolder() {}

  // The returned SkCanvas is still owned by this holder.
  virtual SkCanvas* GetCanvas() = 0;
};

void RasterHelperSetAwDrawSWFunctionTable(AwDrawSWFunctionTable* table);

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_GFX_JAVA_BROWSER_VIEW_RENDERER_HELPER_H_
