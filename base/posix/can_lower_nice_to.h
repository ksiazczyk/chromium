// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CanLowerNiceTo header
// summary: Declares the internal CanLowerNiceTo function that predicts whether setpriority() or nice() can lower a process or thread's nice value.
// ---

#ifndef BASE_POSIX_CAN_LOWER_NICE_TO_H_
#define BASE_POSIX_CAN_LOWER_NICE_TO_H_

namespace base {
namespace internal {

// Returns true if lowering the nice value of a process or thread to
// |nice_value| using setpriority() or nice() should succeed. Note: A lower nice
// value means a higher priority.
bool CanLowerNiceTo(int nice_value);

}  // namespace internal
}  // namespace base

#endif  // BASE_POSIX_CAN_LOWER_NICE_TO_H_
