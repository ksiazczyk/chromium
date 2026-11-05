// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Version history client header for last served date lookups
// summary: Declares GetVersionReleasesUrl and GetLastServedDate, which query the Chrome VersionHistory API for the most recent time a version was still served.
// ---

#ifndef CHROME_BROWSER_UPGRADE_DETECTOR_VERSION_HISTORY_CLIENT_H_
#define CHROME_BROWSER_UPGRADE_DETECTOR_VERSION_HISTORY_CLIENT_H_

#include <optional>

#include "base/functional/callback_forward.h"
#include "base/time/time.h"
#include "base/version.h"
#include "url/gurl.h"

// Returns the URL to get version info of `version` on the current platform
// and channel. The response contains the single release with the most recent
// `serving.endTime`.
GURL GetVersionReleasesUrl(base::Version version);

using LastServedDateCallback =
    base::OnceCallback<void(std::optional<base::Time>)>;

// Returns the most recent time `version` was still served to anyone, based on
// the VersionHistory API.
void GetLastServedDate(base::Version version, LastServedDateCallback callback);

#endif  // CHROME_BROWSER_UPGRADE_DETECTOR_VERSION_HISTORY_CLIENT_H_
