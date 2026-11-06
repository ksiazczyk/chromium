// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Linux input injector scroll direction constants
// summary: Defines the ScrollDirection enum used by the Linux input injector to represent mouse scroll direction.
// ---

#ifndef REMOTING_HOST_LINUX_INPUT_INJECTOR_CONSTANTS_LINUX_H_
#define REMOTING_HOST_LINUX_INPUT_INJECTOR_CONSTANTS_LINUX_H_

namespace remoting {

// Enumerates direction of mouse scroll.
enum class ScrollDirection {
  DOWN = -1,
  UP = 1,
  NONE = 0,
};

}  // namespace remoting

#endif  // REMOTING_HOST_LINUX_INPUT_INJECTOR_CONSTANTS_LINUX_H_
