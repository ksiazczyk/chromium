// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake annotated page content capturer implementation
// summary: Implements the fake capturer that holds a callback used to simulate annotated page content responses in tests.
// ---

#include "chrome/browser/password_manager/password_change/fake_annotated_page_content_capturer.h"

#include <utility>

FakeAnnotatedPageContentCapturer::FakeAnnotatedPageContentCapturer(
    optimization_guide::OnAIPageContentDone callback)
    : callback_(std::move(callback)) {}

FakeAnnotatedPageContentCapturer::~FakeAnnotatedPageContentCapturer() = default;
