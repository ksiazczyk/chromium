// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PermissionStatus IntDef annotation for WebAPK service permission states
// summary: Defines an IntDef annotation with ALLOW, BLOCK and ASK values representing the permission state in WebAPK service calls.
// ---

package org.chromium.webapk.shell_apk;

import androidx.annotation.IntDef;

import org.chromium.build.annotations.NullMarked;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

/** Represents the permission state in service calls. */
@IntDef({PermissionStatus.ALLOW, PermissionStatus.BLOCK, PermissionStatus.ASK})
@Retention(RetentionPolicy.SOURCE)
@NullMarked
public @interface PermissionStatus {
    int ALLOW = 0;
    int BLOCK = 1;
    int ASK = 2;
}
