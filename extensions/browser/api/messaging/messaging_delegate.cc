// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MessagingDelegate default stub implementation
// summary: Provides default not-implemented MessagingDelegate methods that disallow native messaging hosts and return no tab information or native app receivers.
// ---

#include "extensions/browser/api/messaging/messaging_delegate.h"

#include "base/functional/callback.h"
#include "base/notimplemented.h"
#include "extensions/common/extension_id.h"

namespace extensions {

MessagingDelegate::PolicyPermission
MessagingDelegate::IsNativeMessagingHostAllowed(
    content::BrowserContext* browser_context,
    const std::string& native_host_name) {
  NOTIMPLEMENTED();
  return PolicyPermission::DISALLOW;
}

std::optional<base::DictValue> MessagingDelegate::MaybeGetTabInfo(
    content::WebContents* web_contents) {
  NOTIMPLEMENTED();
  return std::nullopt;
}

content::WebContents* MessagingDelegate::GetWebContentsByTabId(
    content::BrowserContext* browser_context,
    int tab_id) {
  NOTIMPLEMENTED();
  return nullptr;
}

std::unique_ptr<MessagePort> MessagingDelegate::CreateReceiverForNativeApp(
    content::BrowserContext* browser_context,
    base::WeakPtr<MessagePort::ChannelDelegate> channel_delegate,
    content::RenderFrameHost* source,
    const ExtensionId& extension_id,
    const PortId& receiver_port_id,
    const std::string& native_app_name,
    bool allow_user_level,
    const SigningCertificates& android_certificates,
    std::string* error_out) {
  NOTIMPLEMENTED();
  return nullptr;
}

void MessagingDelegate::QueryIncognitoConnectability(
    content::BrowserContext* context,
    const Extension* target_extension,
    content::WebContents* source_contents,
    const GURL& source_url,
    base::OnceCallback<void(bool)> callback) {
  NOTIMPLEMENTED();
  std::move(callback).Run(false);
}

}  // namespace extensions
