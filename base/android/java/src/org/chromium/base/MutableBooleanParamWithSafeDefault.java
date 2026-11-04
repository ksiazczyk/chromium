// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mutable boolean feature param with safe default
// summary: Boolean feature parameter that returns a safe default value until native is loaded, then reads the actual value from the feature map.
// ---

package org.chromium.base;

import org.chromium.build.annotations.NullMarked;

/** Boolean {@link FeatureParam} that will return a default value before native is loaded. */
@NullMarked
public class MutableBooleanParamWithSafeDefault extends MutableParamWithSafeDefault<Boolean> {
    public MutableBooleanParamWithSafeDefault(
            FeatureMap featureMap, String featureName, String paramName, boolean defaultValue) {
        super(featureMap, featureName, paramName, defaultValue);
    }

    /** Returns the value of this param as a primitive boolean. */
    public boolean getValue() {
        return getValueBoxed();
    }

    @Override
    protected Boolean readValueFromFeatureMap() {
        return mFeatureMap.getFieldTrialParamByFeatureAsBoolean(
                mFeatureName, mParamName, mDefaultValue);
    }
}
