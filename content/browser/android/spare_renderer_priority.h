// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Spare renderer priority enum
// summary: Defines an enum describing the outcome of spare renderer priority updates, generated as a Java enum for the content browser.
// ---

#ifndef CONTENT_BROWSER_ANDROID_SPARE_RENDERER_PRIORITY_H_
#define CONTENT_BROWSER_ANDROID_SPARE_RENDERER_PRIORITY_H_

namespace content {

// Used for returning the result of updating the spare renderer priority.
// GENERATED_JAVA_ENUM_PACKAGE: org.chromium.content.browser
enum class SpareRendererPriority {
  // The priority of the renderer is not changed.
  SPARE_NO_CHANGE,
  // The priority of the spare renderer is successfully graduated.
  SPARE_GRADUATED,
  // The spare renderer is dead.
  SPARE_DEAD,
};

}  // namespace content

#endif  // CONTENT_BROWSER_ANDROID_SPARE_RENDERER_PRIORITY_H_
