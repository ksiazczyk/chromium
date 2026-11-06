// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VrCompositorDelegateProvider factory interface
// summary: Interface for creating VrCompositorDelegate instances needed to talk to the compositor so the Surface renders correctly.
// ---

package org.chromium.components.webxr;

import org.chromium.build.annotations.NullMarked;
import org.chromium.content_public.browser.WebContents;

/**
 * Interface used to create instances of VrCompositorDelegates, needed to talk to the compositor to
 * ensure that the Surface renders correctly.
 */
@NullMarked
public interface VrCompositorDelegateProvider {
    VrCompositorDelegate create(WebContents webContents);
}
