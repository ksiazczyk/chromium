// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote cocoa browser export macro header
// summary: Defines the REMOTE_COCOA_BROWSER_EXPORT macro used to export symbols from the remote cocoa browser module to consumers.
// ---

#ifndef COMPONENTS_REMOTE_COCOA_BROWSER_REMOTE_COCOA_BROWSER_EXPORT_H_
#define COMPONENTS_REMOTE_COCOA_BROWSER_REMOTE_COCOA_BROWSER_EXPORT_H_

// Defines REMOTE_COCOA_BROWSER_EXPORT so that functionality implemented by the
// RemoteCocoa browser  module can be exported to consumers.

#if defined(COMPONENT_BUILD)
#define REMOTE_COCOA_BROWSER_EXPORT __attribute__((visibility("default")))

#else  // defined(COMPONENT_BUILD)
#define REMOTE_COCOA_BROWSER_EXPORT
#endif

#endif  // COMPONENTS_REMOTE_COCOA_BROWSER_REMOTE_COCOA_BROWSER_EXPORT_H_
