// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabStripObserver default implementations
// summary: Provides empty default implementations of the observer callbacks for tabs being added, moved, and removed.
// ---

#include "chrome/browser/ui/views/tabs/shared/tab_strip_observer.h"

void TabStripObserver::OnTabAdded(int index) {}

void TabStripObserver::OnTabMoved(int from_index, int to_index) {}

void TabStripObserver::OnTabRemoved(int index) {}
