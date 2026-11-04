// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DevTools dock side enum
// summary: 'Defines the devtools::DockSide enum listing the sides where DevTools can dock: none, left, right and bottom.'
// ---

#ifndef CHROME_BROWSER_DEVTOOLS_DEVTOOLS_DOCK_SIDE_H_
#define CHROME_BROWSER_DEVTOOLS_DEVTOOLS_DOCK_SIDE_H_

namespace devtools {

enum class DockSide { kNone, kLeft, kRight, kBottom };

}  // namespace devtools

#endif  // CHROME_BROWSER_DEVTOOLS_DEVTOOLS_DOCK_SIDE_H_
