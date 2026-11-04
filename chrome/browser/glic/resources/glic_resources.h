// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Glic resource ID mapping header
// summary: Header declaring the glic::GetResourceID function that resolves a resource ID to its corresponding dynamic resource ID.
// ---

#ifndef CHROME_BROWSER_GLIC_RESOURCES_GLIC_RESOURCES_H_
#define CHROME_BROWSER_GLIC_RESOURCES_GLIC_RESOURCES_H_

namespace glic {

// Given a resource ID, return the corresponding dynamic resource ID.
int GetResourceID(int id);

}  // namespace glic

#endif  // CHROME_BROWSER_GLIC_RESOURCES_GLIC_RESOURCES_H_
