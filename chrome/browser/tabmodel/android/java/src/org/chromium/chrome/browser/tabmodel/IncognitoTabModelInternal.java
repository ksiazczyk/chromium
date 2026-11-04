// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IncognitoTabModelInternal
// summary: Package-private glue interface that combines the IncognitoTabModel and TabModelInternal interfaces.
// ---

package org.chromium.chrome.browser.tabmodel;

import androidx.annotation.VisibleForTesting;

import org.chromium.build.annotations.NullMarked;

/** Glue type to combine {@link IncognitoTabModel} and {@link TabModelInternal} interfaces. */
@VisibleForTesting(otherwise = VisibleForTesting.PACKAGE_PRIVATE)
@NullMarked
public interface IncognitoTabModelInternal extends IncognitoTabModel, TabModelInternal {}
