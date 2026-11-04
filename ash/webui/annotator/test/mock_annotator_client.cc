// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockAnnotatorClient implementation
// summary: Implements the MockAnnotatorClient test double, returning a test annotations overlay view for annotator unit tests.
// ---

#include "ash/webui/annotator/test/mock_annotator_client.h"

#include <memory>

#include "ash/public/cpp/annotator/annotations_overlay_view.h"

namespace ash {
namespace {

class TestAnnotationsOverlayView : public AnnotationsOverlayView {
 public:
  TestAnnotationsOverlayView() = default;
  TestAnnotationsOverlayView(const TestAnnotationsOverlayView&) = delete;
  TestAnnotationsOverlayView& operator=(const TestAnnotationsOverlayView&) =
      delete;
  ~TestAnnotationsOverlayView() override = default;
};

}  // namespace

MockAnnotatorClient::MockAnnotatorClient() = default;
MockAnnotatorClient::~MockAnnotatorClient() = default;

std::unique_ptr<AnnotationsOverlayView>
MockAnnotatorClient::CreateAnnotationsOverlayView() const {
  return std::make_unique<TestAnnotationsOverlayView>();
}
}  // namespace ash
