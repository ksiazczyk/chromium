// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwPicture JNI bridge for SkPicture drawing
// summary: Implements the JNI bridge for AwPicture, exposing SkPicture width, height and drawing to a Java canvas for software rendering.
// relations:
//   - depends_on /android_webview/browser/gfx/aw_picture.h
//   - implements /android_webview/browser/gfx/aw_picture.h
//   - depends_on /android_webview/browser/gfx/java_browser_view_renderer_helper.h
// ---

#include "android_webview/browser/gfx/aw_picture.h"

#include "android_webview/browser/gfx/java_browser_view_renderer_helper.h"
#include "base/check.h"
#include "base/logging.h"
#include "third_party/skia/include/core/SkPicture.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "android_webview/browser_jni_headers/AwPicture_jni.h"

using base::android::JavaRef;

namespace android_webview {

AwPicture::AwPicture(sk_sp<SkPicture> picture) : picture_(std::move(picture)) {
  DCHECK(picture_);
}

AwPicture::~AwPicture() {}

void AwPicture::Destroy(JNIEnv* env) {
  delete this;
}

int32_t AwPicture::GetWidth(JNIEnv* env) {
  return picture_->cullRect().roundOut().width();
}

int32_t AwPicture::GetHeight(JNIEnv* env) {
  return picture_->cullRect().roundOut().height();
}

void AwPicture::Draw(JNIEnv* env, const JavaRef<jobject>& canvas) {
  const SkIRect bounds = picture_->cullRect().roundOut();
  if (bounds.isEmpty()) {
    return;
  }
  std::unique_ptr<SoftwareCanvasHolder> canvas_holder =
      SoftwareCanvasHolder::Create(canvas, gfx::Point(),
                                   gfx::Size(bounds.width(), bounds.height()),
                                   false);
  if (!canvas_holder || !canvas_holder->GetCanvas()) {
    LOG(ERROR) << "Couldn't draw picture";
    return;
  }
  picture_->playback(canvas_holder->GetCanvas());
}

}  // namespace android_webview

DEFINE_JNI(AwPicture)
