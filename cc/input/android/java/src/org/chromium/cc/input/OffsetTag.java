// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OffsetTag
// summary: Java counterpart to the native viz::OffsetTag, a simple value object wrapping a random or provided Token and exposing it to native code via JNI.
// ---

package org.chromium.cc.input;

import com.google.errorprone.annotations.DoNotMock;

import org.jni_zero.CalledByNative;

import org.chromium.base.Token;
import org.chromium.build.annotations.NullMarked;

/** Java counterpart to the native viz::OffsetTag. */
@DoNotMock("This is a simple value object.")
@NullMarked
public final class OffsetTag {
    private final Token mToken;

    public static OffsetTag createRandom() {
        return new OffsetTag(Token.createRandom());
    }

    public OffsetTag(Token token) {
        mToken = token;
    }

    @Override
    public String toString() {
        return mToken.toString();
    }

    @CalledByNative
    public Token getToken() {
        return mToken;
    }
}
