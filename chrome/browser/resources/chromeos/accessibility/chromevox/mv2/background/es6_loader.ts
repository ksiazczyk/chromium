// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Background initialization entry point
// summary: Small loader whose only job is to initialize the ChromeVox background when the extension starts.
// ---

import {Background} from './background.js';

Background.init();
