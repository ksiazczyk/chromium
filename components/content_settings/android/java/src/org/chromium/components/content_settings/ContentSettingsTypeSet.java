// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ContentSettingsTypeSet Java counterpart of the C++ type set
// summary: Java wrapper mirroring content_settings::ContentSettingsTypeSet that holds a single content settings type and reports whether it covers all types.
// ---

package org.chromium.components.content_settings;

import org.chromium.build.annotations.NullMarked;

/** Java counter part of content_settings::ContentSettingsTypeSet. */
@NullMarked
public final class ContentSettingsTypeSet {
    private final @ContentSettingsType.EnumType int mType;

    public ContentSettingsTypeSet(@ContentSettingsType.EnumType int type) {
        mType = type;
    }

    /** Returns whether type is in this set. */
    public boolean contains(@ContentSettingsType.EnumType int type) {
        return containsAllTypes() || mType == type;
    }

    /** If this set contains all content settings type. */
    public boolean containsAllTypes() {
        return mType == ContentSettingsType.DEFAULT;
    }

    /**
     * Get the content settings type held in this set. Called only when {@link #containsAllTypes} is
     * false.
     */
    public @ContentSettingsType.EnumType int getType() {
        assert !containsAllTypes();
        return mType;
    }

    @Override
    public boolean equals(Object obj) {
        return (obj instanceof ContentSettingsTypeSet)
                && mType == ((ContentSettingsTypeSet) obj).mType;
    }
}
