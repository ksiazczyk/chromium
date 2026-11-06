// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Save address profile infobar banner interaction handler header
// summary: Declares the helper class that updates the model layer for interaction events with the SaveAddressProfile infobar banner UI.
// ---

#ifndef IOS_CHROME_BROWSER_INFOBARS_MODEL_OVERLAYS_BROWSER_AGENT_INTERACTION_HANDLERS_AUTOFILL_ADDRESS_PROFILE_SAVE_ADDRESS_PROFILE_INFOBAR_BANNER_INTERACTION_HANDLER_H_
#define IOS_CHROME_BROWSER_INFOBARS_MODEL_OVERLAYS_BROWSER_AGENT_INTERACTION_HANDLERS_AUTOFILL_ADDRESS_PROFILE_SAVE_ADDRESS_PROFILE_INFOBAR_BANNER_INTERACTION_HANDLER_H_

#include <string.h>

#import "ios/chrome/browser/infobars/model/overlays/browser_agent/interaction_handlers/common/infobar_banner_interaction_handler.h"

namespace autofill {
class AutofillSaveUpdateAddressProfileDelegateIOS;
}

// Helper object that updates the model layer for interaction events with the
// SaveAddressProfile infobar banner UI.
class SaveAddressProfileInfobarBannerInteractionHandler
    : public InfobarBannerInteractionHandler {
 public:
  SaveAddressProfileInfobarBannerInteractionHandler();
  ~SaveAddressProfileInfobarBannerInteractionHandler() override;

  // InfobarBannerInteractionHandler:
  void BannerVisibilityChanged(InfoBarIOS* infobar, bool visible) override;
  void BannerDismissedByUser(InfoBarIOS* infobar) override;

 private:
  // Returns the SaveAddressProfile delegate from `infobar`.
  autofill::AutofillSaveUpdateAddressProfileDelegateIOS* GetInfobarDelegate(
      InfoBarIOS* infobar);
};

#endif  // IOS_CHROME_BROWSER_INFOBARS_MODEL_OVERLAYS_BROWSER_AGENT_INTERACTION_HANDLERS_AUTOFILL_ADDRESS_PROFILE_SAVE_ADDRESS_PROFILE_INFOBAR_BANNER_INTERACTION_HANDLER_H_
