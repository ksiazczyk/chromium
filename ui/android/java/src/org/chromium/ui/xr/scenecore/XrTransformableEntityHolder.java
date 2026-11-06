// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: XrTransformableEntityHolder combined entity holder interface
// summary: Interface for XR entity holders that combine movement, resizing, and interaction capabilities by extending the movable, resizable, and interactable holder interfaces.
// ---

package org.chromium.ui.xr.scenecore;

import org.chromium.build.annotations.NullMarked;

/** Interface for an XR entity holder that supports movement, resizing, and interaction. */
@NullMarked
public interface XrTransformableEntityHolder<EntityType>
        extends XrEntityHolder<EntityType>,
                XrMovableEntityHolder,
                XrResizableEntityHolder,
                XrInteractableEntityHolder {}
