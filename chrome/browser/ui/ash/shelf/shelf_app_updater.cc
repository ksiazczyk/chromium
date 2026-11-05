// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ShelfAppUpdater implementation
// summary: Implements the ShelfAppUpdater base class constructor and destructor used for handling Chrome app life-cycle events on the shelf.
// ---

#include "chrome/browser/ui/ash/shelf/shelf_app_updater.h"

ShelfAppUpdater::ShelfAppUpdater(Delegate* delegate,
                                 content::BrowserContext* browser_context)
    : delegate_(delegate), browser_context_(browser_context) {}

ShelfAppUpdater::~ShelfAppUpdater() = default;
