// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MessageEvent class header for JS sandbox message ports
// summary: Declares the MessageEvent class that wraps the data of a message received on a JS sandbox message port as a garbage-collected gin object.
// relations:
//   - depends_on /base/android/jni_android.h
//   - depends_on /gin/wrappable.h
// ---

#ifndef ANDROID_WEBVIEW_JS_SANDBOX_SERVICE_MESSAGE_EVENT_H_
#define ANDROID_WEBVIEW_JS_SANDBOX_SERVICE_MESSAGE_EVENT_H_

#include "base/android/jni_android.h"
#include "gin/wrappable.h"
#include "v8/include/v8-array-buffer.h"
#include "v8/include/v8-local-handle.h"
#include "v8/include/v8-traced-handle.h"

namespace android_webview {

// Represents the event received on a message port.
class MessageEvent : public gin::Wrappable<MessageEvent> {
 public:
  static constexpr gin::WrapperInfo kWrapperInfo = {{gin::kEmbedderNativeGin},
                                                    gin::kJsMessageEvent};

  gin::ObjectTemplateBuilder GetObjectTemplateBuilder(
      v8::Isolate* isolate) override;

  const gin::WrapperInfo* wrapper_info() const override;

  MessageEvent(v8::Isolate* isolate, v8::Local<v8::Value> data);
  ~MessageEvent() override;

  // Returns the data of the event.
  v8::Local<v8::Value> GetData(v8::Isolate* isolate) const;

  // CppGC Tracing method
  void Trace(cppgc::Visitor* visitor) const override;

 private:
  // The data of the event.
  v8::TracedReference<v8::Value> data_;
};

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_JS_SANDBOX_SERVICE_MESSAGE_EVENT_H_
