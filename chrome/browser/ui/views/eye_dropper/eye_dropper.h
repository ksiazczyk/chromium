// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Declaration of the ShowEyeDropper entry point
// summary: Declares ShowEyeDropper, which opens an eye dropper window for a given render frame and listener.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_EYE_DROPPER_EYE_DROPPER_H_
#define CHROME_BROWSER_UI_VIEWS_EYE_DROPPER_EYE_DROPPER_H_

#include <memory>

namespace content {
class EyeDropper;
class EyeDropperListener;
class RenderFrameHost;
}  // namespace content

// Shows an eye dropper window.
std::unique_ptr<content::EyeDropper> ShowEyeDropper(
    content::RenderFrameHost* frame,
    content::EyeDropperListener* listener);

#endif  // CHROME_BROWSER_UI_VIEWS_EYE_DROPPER_EYE_DROPPER_H_
