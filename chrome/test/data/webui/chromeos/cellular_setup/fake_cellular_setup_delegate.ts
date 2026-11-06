// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake cellular setup delegate
// summary: Test double implementing the cellular setup delegate interface with fixed page title and cancel button behavior.
// ---

import type {CellularSetupDelegate} from 'chrome://resources/ash/common/cellular_setup/cellular_setup_delegate.js';

export class FakeCellularSetupDelegate implements CellularSetupDelegate {
  shouldShowPageTitle(): boolean {
    return false;
  }

  shouldShowCancelButton(): boolean {
    return true;
  }
}
