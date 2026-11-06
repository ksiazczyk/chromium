// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ModuleDescriptor
// summary: Interface that provides information about a dynamic feature module, such as its PAK resource files and whether native code loads on getImpl().
// ---

package org.chromium.components.module_installer.builder;

import org.chromium.build.annotations.NullMarked;

/** Provides information about a dynamic feature module. */
@NullMarked
public interface ModuleDescriptor {
    /** Returns the list of PAK resources files this module contains. */
    String[] getPaks();

    /** Returns whether to auto-load native libraries / resources on getImpl(). */
    boolean getLoadNativeOnGetImpl();
}
