// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwPrintRenderFrameHelperDelegate class declaration
// summary: Declares the WebView delegate for PrintRenderFrameHelper that disables print preview and scripted printing.
// relations:
//   - implements /components/printing/renderer/print_render_frame_helper.h
// ---

#ifndef ANDROID_WEBVIEW_RENDERER_AW_PRINT_RENDER_FRAME_HELPER_DELEGATE_H_
#define ANDROID_WEBVIEW_RENDERER_AW_PRINT_RENDER_FRAME_HELPER_DELEGATE_H_

#include "components/printing/renderer/print_render_frame_helper.h"

namespace android_webview {

class AwPrintRenderFrameHelperDelegate
    : public printing::PrintRenderFrameHelper::Delegate {
 public:
  AwPrintRenderFrameHelperDelegate();

  AwPrintRenderFrameHelperDelegate(const AwPrintRenderFrameHelperDelegate&) =
      delete;
  AwPrintRenderFrameHelperDelegate& operator=(
      const AwPrintRenderFrameHelperDelegate&) = delete;

  ~AwPrintRenderFrameHelperDelegate() override;

 private:
  // printing::PrintRenderFrameHelper::Delegate:
  blink::WebElement GetPdfElement(blink::WebLocalFrame* frame) override;
  bool IsPrintPreviewEnabled() override;
  bool IsScriptedPrintEnabled() override;
  bool OverridePrint(blink::WebLocalFrame* frame) override;
};

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_RENDERER_AW_PRINT_RENDER_FRAME_HELPER_DELEGATE_H_
