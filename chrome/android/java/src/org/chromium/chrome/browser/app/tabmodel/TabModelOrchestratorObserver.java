// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabModelOrchestratorObserver
// summary: Observer interface notified when the tab persistent stores associated with a TabModelOrchestrator are initialized.
// ---

package org.chromium.chrome.browser.app.tabmodel;

import org.chromium.build.annotations.NullMarked;

/** Observer for {@link TabModelOrchestrator} changes. */
@NullMarked
public interface TabModelOrchestratorObserver {
    /**
     * Called when the {@link TabPersistentStore}s associated with this orchestrator are
     * initialized.
     */
    default void onStoresInitialized() {}
}
