// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock enum fixture with deleted entry
// summary: Mock enum header fixture that removes the mError1 entry, representing a forbidden deletion for checker testing.
// ---

#ifndef MOCK_ENUM_H_
#define MOCK_ENUM_H_

// Here is our mock enum. Beyond testing it is completely meaningless.
// MockEnum follows strict rules for valid modifications:
//    1. NO reordering of entries
//    2. NO deletions of entries
//    3. New entries must be added just before mBoundary, never after
//
enum MockEnum {
  mEntry1,
  mEntry2,
  mData1,
  mData2,
  mEntry3,
  mInfo1,
  mData3,
  mFunction1,
  mInfo2,
  mData4,
  mBoundary // Do not add below here
};

#endif  // MOCK_ENUM_H_
