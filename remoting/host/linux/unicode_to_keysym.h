// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Unicode to X keysym lookup interface
// summary: Declares GetKeySymsForUnicode, which returns the X keysyms matching a given Unicode code point.
// ---

#ifndef REMOTING_HOST_LINUX_UNICODE_TO_KEYSYM_H_
#define REMOTING_HOST_LINUX_UNICODE_TO_KEYSYM_H_

#include <stdint.h>

#include <vector>

namespace remoting {

std::vector<uint32_t> GetKeySymsForUnicode(uint32_t code_point);

}  // namespace remoting

#endif  // REMOTING_HOST_LINUX_UNICODE_TO_KEYSYM_H_
