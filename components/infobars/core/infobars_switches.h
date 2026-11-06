// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Infobars command-line switch declaration
// summary: Declares the disable-infobars command-line switch constant used to turn off infobars in headless and testing builds.
// ---

#ifndef COMPONENTS_INFOBARS_CORE_INFOBARS_SWITCHES_H_
#define COMPONENTS_INFOBARS_CORE_INFOBARS_SWITCHES_H_

namespace switches {

inline constexpr char kDisableInfoBars[] = "disable-infobars";

}  // namespace switches

#endif  // COMPONENTS_INFOBARS_CORE_INFOBARS_SWITCHES_H_
