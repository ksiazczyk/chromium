// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PROXY_CONFIG_EXPORT macro definitions
// summary: Defines the PROXY_CONFIG_EXPORT symbol-visibility macro for DLL export and import in component builds.
// ---

#ifndef COMPONENTS_PROXY_CONFIG_PROXY_CONFIG_EXPORT_H_
#define COMPONENTS_PROXY_CONFIG_PROXY_CONFIG_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(PROXY_CONFIG_IMPLEMENTATION)
#define PROXY_CONFIG_EXPORT __declspec(dllexport)
#else
#define PROXY_CONFIG_EXPORT __declspec(dllimport)
#endif  // defined(PROXY_CONFIG_IMPLEMENTATION)

#else  // defined(WIN32)
#define PROXY_CONFIG_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define PROXY_CONFIG_EXPORT
#endif

#endif  // COMPONENTS_PROXY_CONFIG_PROXY_CONFIG_EXPORT_H_
