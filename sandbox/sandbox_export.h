// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sandbox export macro header
// summary: Defines the SANDBOX_EXPORT macro controlling symbol visibility for the sandbox library in component builds, and rejects inclusion on Windows.
// ---

#ifndef SANDBOX_SANDBOX_EXPORT_H_
#define SANDBOX_SANDBOX_EXPORT_H_

#if defined(WIN32)
#error "sandbox_export.h does not support WIN32."
#endif

#if defined(COMPONENT_BUILD)

#define SANDBOX_EXPORT __attribute__((visibility("default")))

#else  // defined(COMPONENT_BUILD)

#define SANDBOX_EXPORT

#endif  // defined(COMPONENT_BUILD)

#endif  // SANDBOX_SANDBOX_EXPORT_H_
