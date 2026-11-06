// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: XrInteractableEntityHolder interface exposing interaction support
// summary: Interface for XR entity holders that expose an associated XrInteractableComponent for interaction support.
// ---

package org.chromium.ui.xr.scenecore;

import org.chromium.build.annotations.NullMarked;

/** Interface for an XR entity holder that supports interaction. */
@NullMarked
public interface XrInteractableEntityHolder {
    /** Returns the {@link XrInteractableComponent} associated with this entity. */
    XrInteractableComponent getInteractableComponent();
}
