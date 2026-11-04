// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Process sharing info bar delegate implementation
// summary: Implements the confirm info bar delegate that shows the shared process message with an opt-out button and a learn-more link.
// ---

#include "chrome/browser/devtools/process_sharing_infobar_delegate.h"

#include "chrome/browser/devtools/process_sharing_infobar.h"
#include "chrome/grit/generated_resources.h"
#include "components/infobars/core/infobar.h"
#include "content/public/browser/web_contents.h"
#include "ui/base/l10n/l10n_util.h"

ProcessSharingInfobarDelegate::ProcessSharingInfobarDelegate(
    content::WebContents* web_contents)
    : inspected_web_contents_(web_contents->GetWeakPtr()) {}

ProcessSharingInfobarDelegate::~ProcessSharingInfobarDelegate() = default;

std::u16string ProcessSharingInfobarDelegate::GetMessageText() const {
  return l10n_util::GetStringUTF16(IDS_DEV_TOOLS_SHARED_PROCESS_INFOBAR);
}

int ProcessSharingInfobarDelegate::GetButtons() const {
  return BUTTON_OK;
}

std::u16string ProcessSharingInfobarDelegate::GetButtonLabel(
    InfoBarButton button) const {
  CHECK_EQ(BUTTON_OK, button, base::NotFatalUntil::M161);
  return l10n_util::GetStringUTF16(
      IDS_DEV_TOOLS_SHARED_PROCESS_INFOBAR_OPT_OUT);
}

std::u16string ProcessSharingInfobarDelegate::GetLinkText() const {
  return l10n_util::GetStringUTF16(
      IDS_DEV_TOOLS_SHARED_PROCESS_INFOBAR_LEARN_MORE);
}

GURL ProcessSharingInfobarDelegate::GetLinkURL() const {
  return GURL("https://developer.chrome.com/blog/process-sharing-experiment");
}

infobars::InfoBarDelegate::InfoBarIdentifier
ProcessSharingInfobarDelegate::GetIdentifier() const {
  return DEV_TOOLS_SHARED_PROCESS_DELEGATE;
}

bool ProcessSharingInfobarDelegate::Accept() {
  if (inspected_web_contents_) {
    ShowProcessSharingRestartDialog(inspected_web_contents_.get());
  }

  return ConfirmInfoBarDelegate::Accept();
}
