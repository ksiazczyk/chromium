// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Engine factory for install engines
// summary: Factory class that builds the concrete install engine, returning a SplitCompatEngine instance.
// ---

package org.chromium.components.module_installer.engine;

import org.chromium.build.annotations.NullMarked;

/** Factory used to build concrete engines. */
@NullMarked
public class EngineFactory {
    public InstallEngine getEngine() {
        return new SplitCompatEngine();
    }
}
