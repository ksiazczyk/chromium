// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OnDemandModuleInternalEntryPoints marker interface
// summary: Empty marker interface used to identify the internal on_demand module entry points implementation loaded via ServiceLoaderUtil.
// ---

package org.chromium.chrome.modules.on_demand;

import org.chromium.build.annotations.NullMarked;

/** Marker interface for the internal impl. */
@NullMarked
public interface OnDemandModuleInternalEntryPoints {}
