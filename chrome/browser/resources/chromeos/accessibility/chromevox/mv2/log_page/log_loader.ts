// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeVox log page loader
// summary: Initializes the ChromeVox log page by starting the LogPage instance once the DOM content has loaded.
// ---

import {LogPage} from './log.js';

document.addEventListener('DOMContentLoaded', () => LogPage.init(), false);
