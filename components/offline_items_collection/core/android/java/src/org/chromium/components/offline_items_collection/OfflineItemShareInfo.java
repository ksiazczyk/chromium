// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OfflineItemShareInfo holding a share URI
// summary: Java counterpart of the C++ OfflineItemShareInfo class that carries the Uri used when sharing an offline item.
// ---

package org.chromium.components.offline_items_collection;

import android.net.Uri;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/**
 * This class is the Java counterpart to the C++ OfflineItemShareInfo
 * (components/offline_items_collection/core/offline_item.h) class.
 *
 * For all member variable descriptions see the C++ class.
 * TODO(dtrainor): Investigate making all class members for this and the C++ counterpart const.
 */
@NullMarked
public class OfflineItemShareInfo {
    public @Nullable Uri uri;
}
