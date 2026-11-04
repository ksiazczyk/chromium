// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Web install manifest fetch error codes
// summary: Defines the WebInstallManifestFetchError enum with error codes for manifest fetching during the web install flow.
// ---

#ifndef CHROME_BROWSER_WEB_APPLICATIONS_MODEL_WEB_INSTALL_MANIFEST_FETCH_ERROR_H_
#define CHROME_BROWSER_WEB_APPLICATIONS_MODEL_WEB_INSTALL_MANIFEST_FETCH_ERROR_H_

namespace web_app {

// Error codes for manifest fetching during the web install flow.
enum class WebInstallManifestFetchError {
  kDownloadFailed,
  kRedirected,
  kInvalidContentType,
};

}  // namespace web_app

#endif  // CHROME_BROWSER_WEB_APPLICATIONS_MODEL_WEB_INSTALL_MANIFEST_FETCH_ERROR_H_
