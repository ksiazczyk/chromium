// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cronet callback returning the response body as raw bytes
// summary: Abstract Cronet callback that returns the response body bytes verbatim without any interpretation.
// ---

package org.chromium.net.apihelpers;

import org.chromium.net.UrlResponseInfo;

/**
 * A specialization of {@link InMemoryTransformCronetCallback} which returns the body bytes verbatim
 * without any interpretation.
 */
public abstract class ByteArrayCronetCallback extends InMemoryTransformCronetCallback<byte[]> {
    @Override // Override to return the subtype
    public ByteArrayCronetCallback addCompletionListener(
            CronetRequestCompletionListener<? super byte[]> listener) {
        super.addCompletionListener(listener);
        return this;
    }

    @Override
    protected final byte[] transformBodyBytes(UrlResponseInfo info, byte[] bodyBytes) {
        return bodyBytes;
    }
}
