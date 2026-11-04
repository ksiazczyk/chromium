// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake language bridge JNI
// summary: Fake implementation of the LanguageBridge native methods that provides configurable ULP language lists for tests.
// ---

package org.chromium.chrome.browser.language;

import org.chromium.chrome.browser.profiles.Profile;

import java.util.ArrayList;
import java.util.List;

/** Fake implementation of LanguageBridge native methods used for testing. */
public class FakeLanguageBridgeJni implements LanguageBridge.Natives {
    private ArrayList<String> mULPLanguages;

    public FakeLanguageBridgeJni() {
        mULPLanguages = new ArrayList<>();
    }

    public void setULPLanguages(List<String> languageCodes) {
        mULPLanguages = new ArrayList<>(languageCodes);
    }

    @Override
    public List<String> getULPFromPreference(Profile profile) {
        return mULPLanguages;
    }
}
