// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fetch client settings object conversion helpers
// summary: Implements converters between the Web and Mojo representations of the fetch client settings object used for worker script loads.
// ---

#include "content/renderer/worker/fetch_client_settings_object_helpers.h"

#include "content/renderer/policy_container_util.h"
#include "third_party/blink/public/platform/web_fetch_client_settings_object.h"
#include "third_party/blink/public/platform/web_policy_container.h"

namespace content {

blink::mojom::FetchClientSettingsObjectPtr
FetchClientSettingsObjectFromWebToMojom(
    const blink::WebFetchClientSettingsObject& web_settings_object) {
  return blink::mojom::FetchClientSettingsObject::New(
      FromWebPolicyContainerPolicies(
          web_settings_object.policy_container_policies),
      web_settings_object.outgoing_referrer,
      web_settings_object.insecure_requests_policy);
}

blink::WebFetchClientSettingsObject FetchClientSettingsObjectFromMojomToWeb(
    const blink::mojom::FetchClientSettingsObjectPtr& mojom_settings_object) {
  return blink::WebFetchClientSettingsObject(
      ToWebPolicyContainerPolicies(
          mojom_settings_object->policy_container_policies),
      mojom_settings_object->outgoing_referrer,
      mojom_settings_object->insecure_requests_policy);
}

}  // namespace content
