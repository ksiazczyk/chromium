// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DeferredStartRenderHost interface
// summary: Defines an interface for browser components whose renderer startup can be deferred to throttle resource usage, used with ExtensionHostQueue.
// ---

#ifndef EXTENSIONS_BROWSER_DEFERRED_START_RENDER_HOST_H_
#define EXTENSIONS_BROWSER_DEFERRED_START_RENDER_HOST_H_

namespace extensions {

// A browser component that tracks a renderer. It allows for its renderer
// startup to be deferred, to throttle resource usage upon profile startup.
// To be used with ExtensionHostQueue.
//
// Note that if BackgroundContents and ExtensionHost are unified
// (crbug.com/77790), this interface will be no longer needed.
class DeferredStartRenderHost {
 public:
  virtual ~DeferredStartRenderHost() = default;

  // DO NOT CALL THIS unless you're implementing an ExtensionHostQueue.
  // Called by the ExtensionHostQueue to create the renderer frame tree.
  virtual void CreateRendererNow() = 0;
};

}  // namespace extensions

#endif  // EXTENSIONS_BROWSER_DEFERRED_START_RENDER_HOST_H_
