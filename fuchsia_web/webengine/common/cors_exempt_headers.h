// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CORS exempt header API
// summary: Declares functions to set and query which HTTP header names are exempt from CORS enforcement when injected.
// ---

#ifndef FUCHSIA_WEB_WEBENGINE_COMMON_CORS_EXEMPT_HEADERS_H_
#define FUCHSIA_WEB_WEBENGINE_COMMON_CORS_EXEMPT_HEADERS_H_

#include <string>
#include <string_view>
#include <vector>

#include "fuchsia_web/webengine/web_engine_export.h"

// Sets the list of HTTP header names which will bypass CORS enforcement when
// injected.
WEB_ENGINE_EXPORT void SetCorsExemptHeaders(
    const std::vector<std::string>& headers);

// Returns true if the header with |header_name| may bypass CORS when injected.
// Matching of |header_name| is case insensitive, as Chromium's net internals
// don't normalize the casing of header names.
// May only be called after SetCorsExemptHeaders() is invoked.
WEB_ENGINE_EXPORT bool IsHeaderCorsExempt(std::string_view header_name);

#endif  // FUCHSIA_WEB_WEBENGINE_COMMON_CORS_EXEMPT_HEADERS_H_
