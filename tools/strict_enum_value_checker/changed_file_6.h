// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock enum fixture with misplaced boundary line
// summary: Mock enum header fixture with the mBoundary comment line moved above the enum declaration, a malformed case for checker testing.
// ---

#ifndef MOCK_ENUM_H_
#define MOCK_ENUM_H_

// Here is our mock enum. Beyond testing it is completely meaningless.
// MockEnum follows strict rules for valid modifications:
//    1. NO reordering of entries
//    2. NO deletions of entries
//    3. New entries must be added just before mBoundary, never after
//
  mBoundary // Do not add below here
enum MockEnum {
  mEntry1,
  mEntry2,
  mData1,
  mData2,
  mEntry3,
  mInfo1,
  mData3,
  mError1,
  mFunction1,
  mInfo2,
  mData4,
};

#endif  // MOCK_ENUM_H_
