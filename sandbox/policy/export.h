// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sandbox policy export macros
// summary: Defines the SANDBOX_POLICY_EXPORT macro controlling shared library symbol visibility for component and non-component builds.
// ---

#ifndef SANDBOX_POLICY_EXPORT_H_
#define SANDBOX_POLICY_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(SANDBOX_POLICY_IMPL)
#define SANDBOX_POLICY_EXPORT __declspec(dllexport)
#else
#define SANDBOX_POLICY_EXPORT __declspec(dllimport)
#endif  // defined(SANDBOX_POLICY_IMPL)

#else  // defined(WIN32)
#define SANDBOX_POLICY_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define SANDBOX_POLICY_EXPORT
#endif

#endif  // SANDBOX_POLICY_EXPORT_H_
