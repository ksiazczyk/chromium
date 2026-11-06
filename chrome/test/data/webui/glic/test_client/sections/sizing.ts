// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Glic test client sizing section
// summary: Test client section that toggles the browser host's drag-resize support from a checkbox.
// ---

import {getBrowser} from '../client.js';
import {$} from '../page_element_types.js';

$.enableDragResizeCheckbox.addEventListener('change', () => {
  getBrowser()!.enableDragResize!($.enableDragResizeCheckbox.checked);
});
