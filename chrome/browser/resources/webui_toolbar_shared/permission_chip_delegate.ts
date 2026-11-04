// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Delegate interface for permission chip events
// summary: TypeScript interface defining callbacks the permission chip uses to report clicks, pointer events and animation ends to the browser.
// ---

import type {LhsChipIdentifier} from './toolbar_ui_api_data_model.mojom-webui.js';

export interface PermissionChipDelegate {
  onChipClicked(
      identifier: LhsChipIdentifier, isPointer: boolean,
      stateToken: number): void;
  onChipPointerEntered(identifier: LhsChipIdentifier): void;
  onChipPointerExited(identifier: LhsChipIdentifier): void;
  onChipMousePressed(identifier: LhsChipIdentifier, isMiddleClick?: boolean):
      void;
  onChipExpandAnimationEnded(identifier: LhsChipIdentifier): void;
  onChipCollapseAnimationEnded(identifier: LhsChipIdentifier): void;
}
