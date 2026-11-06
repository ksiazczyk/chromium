// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Content security policy conversion utilities header
// summary: Declares helpers that convert content security policy objects between blink and network mojom representations, singly and in arrays.
// ---

#ifndef CONTENT_RENDERER_CONTENT_SECURITY_POLICY_UTIL_H_
#define CONTENT_RENDERER_CONTENT_SECURITY_POLICY_UTIL_H_

#include <vector>

#include "content/common/content_export.h"
#include "services/network/public/mojom/content_security_policy.mojom-forward.h"
#include "third_party/blink/public/platform/web_content_security_policy_struct.h"

namespace content {

// Convert a WebContentSecurityPolicy into a ContentSecurityPolicy. These two
// classes represent the exact same thing, but one is in content, the other is
// in blink.
// TODO(arthursonzogni): Remove this when BeginNavigation IPC will be called
// directly from blink.
CONTENT_EXPORT
network::mojom::ContentSecurityPolicyPtr BuildContentSecurityPolicy(
    const blink::WebContentSecurityPolicy&);

// Convert a ContentSecurityPolicy into a WebContentSecurityPolicy. These two
// classes represent the exact same thing, but one is in content, the other is
// in blink.
CONTENT_EXPORT
blink::WebContentSecurityPolicy ToWebContentSecurityPolicy(
    const network::mojom::ContentSecurityPolicyPtr&);

// Helper function to perform ToWebContentSecurityPolicy on an array.
CONTENT_EXPORT
std::vector<blink::WebContentSecurityPolicy> ToWebContentSecurityPolicies(
    const std::vector<network::mojom::ContentSecurityPolicyPtr>&);

}  // namespace content

#endif  // CONTENT_RENDERER_CONTENT_SECURITY_POLICY_UTIL_H_
