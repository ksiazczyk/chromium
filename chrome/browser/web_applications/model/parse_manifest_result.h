// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Manifest parsing result and error enum
// summary: Defines the ParseManifestError enum and a ParseManifestResult alias wrapping a parsed manifest or an error for the web app manifest parsing flow.
// ---

#ifndef CHROME_BROWSER_WEB_APPLICATIONS_MODEL_PARSE_MANIFEST_RESULT_H_
#define CHROME_BROWSER_WEB_APPLICATIONS_MODEL_PARSE_MANIFEST_RESULT_H_

#include "base/types/expected.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom-forward.h"

namespace web_app {

enum class ParseManifestError {
  kEmptyOrInvalidManifest,
  kStartUrlInvalid,
  kManifestMissingNameOrShortName,
  kInternalError,
};

using ParseManifestResult =
    base::expected<blink::mojom::ManifestPtr, ParseManifestError>;

}  // namespace web_app

#endif  // CHROME_BROWSER_WEB_APPLICATIONS_MODEL_PARSE_MANIFEST_RESULT_H_
