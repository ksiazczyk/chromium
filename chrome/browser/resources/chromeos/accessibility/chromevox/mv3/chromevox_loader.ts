// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeVox mv3 background loader
// summary: Entry point script that imports the Background class and initializes the ChromeVox background page for the Manifest V3 extension.
// ---

import {Background} from './background/background.js';

Background.init();
