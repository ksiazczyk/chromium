// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebMessage boundary interface
// summary: Boundary interface for WebMessage exposing deprecated string data, a message payload, and the associated WebMessage ports.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;
import org.jspecify.annotations.Nullable;

import java.lang.reflect.InvocationHandler;

/** Boundary interface for WebMessage. */
@NullMarked
public interface WebMessageBoundaryInterface extends FeatureFlagHolderBoundaryInterface {
    @Deprecated
    @Nullable String getData();

    /* MessagePayload */ InvocationHandler getMessagePayload();

    /* WebMessagePort */ InvocationHandler @Nullable [] getPorts();
}
