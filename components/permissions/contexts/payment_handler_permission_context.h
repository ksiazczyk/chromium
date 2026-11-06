// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Payment handler permission context header
// summary: Declares the payment handler permission context based on the content setting permission context base class.
// ---

#ifndef COMPONENTS_PERMISSIONS_CONTEXTS_PAYMENT_HANDLER_PERMISSION_CONTEXT_H_
#define COMPONENTS_PERMISSIONS_CONTEXTS_PAYMENT_HANDLER_PERMISSION_CONTEXT_H_

#include "components/permissions/content_setting_permission_context_base.h"

namespace content {
class WebContents;
}  // namespace content

namespace payments {

class PaymentHandlerPermissionContext
    : public permissions::ContentSettingPermissionContextBase {
 public:
  explicit PaymentHandlerPermissionContext(
      content::BrowserContext* browser_context);

  PaymentHandlerPermissionContext(const PaymentHandlerPermissionContext&) =
      delete;
  PaymentHandlerPermissionContext& operator=(
      const PaymentHandlerPermissionContext&) = delete;

  ~PaymentHandlerPermissionContext() override;

 private:
  // PermissionContextBase
  void DecidePermission(
      std::unique_ptr<permissions::PermissionRequestData> request_data,
      permissions::BrowserPermissionCallback callback) override;
};

}  // namespace payments

#endif  // COMPONENTS_PERMISSIONS_CONTEXTS_PAYMENT_HANDLER_PERMISSION_CONTEXT_H_
