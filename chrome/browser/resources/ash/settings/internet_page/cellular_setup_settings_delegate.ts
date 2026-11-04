// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cellular setup settings delegate
// summary: Delegate that adapts the cellular setup flow for Settings by hiding the page title and showing a cancel button.
// ---

import type {CellularSetupDelegate} from 'chrome://resources/ash/common/cellular_setup/cellular_setup_delegate.js';

export class CellularSetupSettingsDelegate implements CellularSetupDelegate {
  shouldShowPageTitle(): boolean {
    return false;
  }

  shouldShowCancelButton(): boolean {
    return true;
  }
}
