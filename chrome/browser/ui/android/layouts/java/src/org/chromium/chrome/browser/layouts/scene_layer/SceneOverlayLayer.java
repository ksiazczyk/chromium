// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SceneOverlayLayer abstract base class for scene overlays
// summary: Abstract extension of SceneLayer for scene overlays that requires subclasses to set a content tree inside the scene overlay tree.
// ---

package org.chromium.chrome.browser.layouts.scene_layer;

import org.chromium.build.annotations.NullMarked;

/** An extension of SceneLayer for SceneOverlay. */
@NullMarked
public abstract class SceneOverlayLayer extends SceneLayer {
    /**
     * Sets a content tree inside this scene overlay tree.
     * TODO(jaekyun): We need to rename this method later because the meaning of "content" isn't
     * clear.
     */
    public abstract void setContentTree(SceneLayer contentTree);
}
