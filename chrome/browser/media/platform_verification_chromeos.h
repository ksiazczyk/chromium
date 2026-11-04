// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Platform verification browser checks header
// summary: Declares PerformBrowserChecks, the browser-specific component of Chrome OS platform verification, which also logs a UMA histogram.
// ---

#ifndef CHROME_BROWSER_MEDIA_PLATFORM_VERIFICATION_CHROMEOS_H_
#define CHROME_BROWSER_MEDIA_PLATFORM_VERIFICATION_CHROMEOS_H_

// Platform verification consists of two components: browser-specific checks and
// device-specific checks.
//
// This file provides the browser-specific checks.

namespace content {
class RenderFrameHost;
}  // namespace content

namespace platform_verification {

// Checks whether a given |render_frame_host| support platform verification.
// Also logs an UMA histogram.
bool PerformBrowserChecks(content::RenderFrameHost* render_frame_host);

}  // namespace platform_verification

#endif  // CHROME_BROWSER_MEDIA_PLATFORM_VERIFICATION_CHROMEOS_H_
