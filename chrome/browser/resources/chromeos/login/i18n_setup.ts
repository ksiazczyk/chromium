// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: loadTimeData setup for OOBE strings
// summary: Imports localized strings and re-exports loadTimeData for use across OOBE and login code.
// ---

import '/strings.m.js';

export {loadTimeData} from '//resources/ash/common/load_time_data.m.js';
