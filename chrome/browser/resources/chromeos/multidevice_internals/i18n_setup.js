// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: i18n setup for multidevice internals
// summary: Imports localized strings and re-exports loadTimeData for use by the multidevice internals page.
// ---

import '/strings.m.js';

export {loadTimeData} from 'chrome://resources/ash/common/load_time_data.m.js';