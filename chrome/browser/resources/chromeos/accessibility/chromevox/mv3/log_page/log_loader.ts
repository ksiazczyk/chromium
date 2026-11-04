// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Log page loader
// summary: Entry point script that initializes the ChromeVox log page once the DOM content is loaded.
// ---

import {LogPage} from './log.js';

document.addEventListener('DOMContentLoaded', () => LogPage.init(), false);
