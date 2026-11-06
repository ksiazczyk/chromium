// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Upsert pass request details model
// summary: Java model carrying the legal message lines and token required for an Autofill AI upsert pass request, received from native code via JNI.
// ---

package org.chromium.components.autofill.autofill_ai;

import org.jni_zero.CalledByNative;
import org.jni_zero.JNINamespace;
import org.jni_zero.JniType;

import org.chromium.build.annotations.NullMarked;
import org.chromium.components.autofill.payments.LegalMessageLine;

import java.util.List;

/** Information details required for an upsert pass request. */
@JNINamespace("autofill")
@NullMarked
public class DetailsForUpsertPass {
    private final List<LegalMessageLine> mLegalMessageLines;
    private final byte[] mLegalMessageToken;

    @CalledByNative
    public DetailsForUpsertPass(
            @JniType("std::vector<autofill::LegalMessageLine>")
                    List<LegalMessageLine> legalMessageLines,
            byte[] legalMessageToken) {
        mLegalMessageLines = legalMessageLines;
        mLegalMessageToken = legalMessageToken;
    }

    public List<LegalMessageLine> getLegalMessageLines() {
        return mLegalMessageLines;
    }

    public byte[] getLegalMessageToken() {
        return mLegalMessageToken;
    }
}
