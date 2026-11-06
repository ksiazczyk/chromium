// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PermissionPrompt creation implementation
// summary: Implements PermissionPrompt::Create by delegating to PermissionsClient and provides default no-op embedded prompt flow methods on the delegate.
// ---

#include "components/permissions/permission_prompt.h"
#include "components/permissions/permissions_client.h"

namespace permissions {

// TODO(crbug.com/40107932): Move the desktop permission prompt implementations
// into //components/permissions.
std::unique_ptr<PermissionPrompt> PermissionPrompt::Create(
    content::WebContents* web_contents,
    Delegate* delegate) {
  return PermissionsClient::Get()->CreatePrompt(web_contents, delegate);
}

EmbeddedPermissionPromptFlowModel*
PermissionPrompt::Delegate::GetEmbeddedPromptFlowModel() const {
  return nullptr;
}

void PermissionPrompt::Delegate::CalculateCurrentVariantForEmbeddedPrompt() {}

void PermissionPrompt::Delegate::AdvanceOrFinalizeEmbeddedPromptFlow() {}

}  // namespace permissions
