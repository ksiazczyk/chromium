// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Ownership component export macros
// summary: Defines the OWNERSHIP_EXPORT macro controlling symbol visibility for the ownership component in component builds.
// ---

#ifndef COMPONENTS_OWNERSHIP_OWNERSHIP_EXPORT_H_
#define COMPONENTS_OWNERSHIP_OWNERSHIP_EXPORT_H_

#if defined(COMPONENT_BUILD)

#if defined(WIN32)

#if defined(OWNERSHIP_IMPLEMENTATION)
#define OWNERSHIP_EXPORT __declspec(dllexport)
#else
#define OWNERSHIP_EXPORT __declspec(dllimport)
#endif  // defined(OWNERSHIP_IMPLEMENTATION)

#else  // defined(WIN32)

#define OWNERSHIP_EXPORT __attribute__((visibility("default")))

#endif  // defined(WIN32)

#else  // defined(COMPONENT_BUILD)

#define OWNERSHIP_EXPORT

#endif

#endif  // COMPONENTS_OWNERSHIP_OWNERSHIP_EXPORT_H_
