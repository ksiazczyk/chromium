// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CHROME_VIEWS_EXPORT macro definition
// summary: Defines the CHROME_VIEWS_EXPORT macro used to export browser_ui_views library APIs in component and non-component builds.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_CHROME_VIEWS_EXPORT_H_
#define CHROME_BROWSER_UI_VIEWS_CHROME_VIEWS_EXPORT_H_

// Defines CHROME_VIEWS_EXPORT so that APIs implemented by the browser_ui_views
// library can be exported to consumers.

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(CHROME_VIEWS_IMPLEMENTATION)
#define CHROME_VIEWS_EXPORT __declspec(dllexport)
#else
#define CHROME_VIEWS_EXPORT __declspec(dllimport)
#endif  // defined(CHROME_VIEWS_IMPLEMENTATION)

#else  // !defined(WIN32)

#define CHROME_VIEWS_EXPORT __attribute__((visibility("default")))

#endif  // defined(WIN32)

#else  // !defined(COMPONENT_BUILD)

#define CHROME_VIEWS_EXPORT

#endif  // defined(COMPONENT_BUILD)

#endif  // CHROME_BROWSER_UI_VIEWS_CHROME_VIEWS_EXPORT_H_
