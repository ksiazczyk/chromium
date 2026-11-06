// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock render widget host view for stylus writing
// summary: Test double of RenderWidgetHostView that fakes stylus writing support and hover writability state for stylus writing tests in content.
// ---

#ifndef CONTENT_BROWSER_RENDERER_HOST_INPUT_MOCK_RENDER_WIDGET_HOST_VIEW_FOR_STYLUS_WRITING_H_
#define CONTENT_BROWSER_RENDERER_HOST_INPUT_MOCK_RENDER_WIDGET_HOST_VIEW_FOR_STYLUS_WRITING_H_

#include "content/test/test_render_view_host.h"

namespace content {

class RenderWidgetHost;

class MockRenderWidgetHostViewForStylusWriting
    : public TestRenderWidgetHostView {
 public:
  explicit MockRenderWidgetHostViewForStylusWriting(RenderWidgetHost* host)
      : TestRenderWidgetHostView(host) {}
  ~MockRenderWidgetHostViewForStylusWriting() override = default;

  bool ShouldInitiateStylusWriting() override;

  void NotifyHoverActionStylusWritable(bool stylus_writable) override;

  void set_supports_stylus_writing(bool supports) {
    supports_stylus_writing_ = supports;
  }

  bool hover_action_stylus_writable() { return hover_action_stylus_writable_; }

 private:
  bool supports_stylus_writing_ = false;
  bool hover_action_stylus_writable_ = false;
};

}  // namespace content

#endif  // CONTENT_BROWSER_RENDERER_HOST_INPUT_MOCK_RENDER_WIDGET_HOST_VIEW_FOR_STYLUS_WRITING_H_
