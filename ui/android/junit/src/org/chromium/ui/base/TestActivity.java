// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestActivity
// summary: Empty AppCompatActivity fixture declared in the test manifest for use by ui/base tests.
// ---

package org.chromium.ui.base;

import androidx.appcompat.app.AppCompatActivity;

/**
 * Activity used in {@code ui/base} tests.
 * <p>
 * This activity is declared in {@code ui/android/junit/AndroidManifest.xml}.
 */
public class TestActivity extends AppCompatActivity {}
