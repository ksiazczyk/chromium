// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Desktop data controls dialog factory implementation
// summary: Implements the desktop singleton factory that creates DataControlsDialog instances for data control warnings on desktop platforms.
// ---

#include "chrome/browser/enterprise/data_controls/desktop_data_controls_dialog_factory.h"

#include "base/memory/singleton.h"
#include "chrome/browser/enterprise/data_controls/desktop_data_controls_dialog.h"

namespace data_controls {

// static
DesktopDataControlsDialogFactory*
DesktopDataControlsDialogFactory::GetInstance() {
  return base::Singleton<DesktopDataControlsDialogFactory>::get();
}

DataControlsDialog* DesktopDataControlsDialogFactory::CreateDialog(
    DataControlsDialog::Type type,
    content::WebContents* web_contents,
    base::OnceCallback<void(bool bypassed)> callback) {
  return new DesktopDataControlsDialog(type, web_contents, std::move(callback));
}

}  // namespace data_controls
