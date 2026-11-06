// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock enum fixture without modification-rules comment
// summary: Mock enum header fixture with the base MockEnum entries but lacking the modification-rules comment, used as checker test input.
// ---

#ifndef MOCK_ENUM_H_
#define MOCK_ENUM_H_

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
  mBoundary // Do not add below here
};

#endif  // MOCK_ENUM_H_
