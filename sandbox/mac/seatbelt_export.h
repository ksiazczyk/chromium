// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Seatbelt export macro
// summary: Defines the SEATBELT_EXPORT macro controlling symbol visibility for component builds of the Mac sandbox library.
// ---

#ifndef SANDBOX_MAC_SEATBELT_EXPORT_H_
#define SANDBOX_MAC_SEATBELT_EXPORT_H_

#if defined(COMPONENT_BUILD)

#define SEATBELT_EXPORT __attribute__((visibility("default")))

#else  // defined(COMPONENT_BUILD)

#define SEATBELT_EXPORT

#endif  // defined(COMPONENT_BUILD)

#endif  // SANDBOX_MAC_SEATBELT_EXPORT_H_
