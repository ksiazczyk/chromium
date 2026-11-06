// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: URL request rewrite rules type definition
// summary: Defines the ref-counted UrlRequestRewriteRules type alias wrapping the mojom rewrite rules for sharing across components.
// ---

#ifndef COMPONENTS_URL_REWRITE_COMMON_URL_REQUEST_REWRITE_RULES_H_
#define COMPONENTS_URL_REWRITE_COMMON_URL_REQUEST_REWRITE_RULES_H_

#include "base/memory/ref_counted.h"
#include "components/url_rewrite/mojom/url_request_rewrite.mojom.h"

namespace url_rewrite {

using UrlRequestRewriteRules =
    base::RefCountedData<mojom::UrlRequestRewriteRulesPtr>;

}

#endif  // COMPONENTS_URL_REWRITE_COMMON_URL_REQUEST_REWRITE_RULES_H_
