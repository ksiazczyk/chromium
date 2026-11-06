// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: NoRedundantFieldInitCheckIntTest
// summary: ErrorProne test input whose redundant initialization of the int field mBar is expected to trigger the NoRedundantFieldInitCheck warning.
// ---

package org.chromium.tools.errorprone.plugin;

/** |mBar| initialization should cause 'NoRedundantFieldInitCheck' errorprone warning. */
public class NoRedundantFieldInitCheckIntTest {
    @SuppressWarnings("FieldCanBeFinal")
    private int mBar = 0;

    public void foo() {
        System.out.println("" + mBar);
    }
}
