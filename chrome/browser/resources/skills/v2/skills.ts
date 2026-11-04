// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Skills page entry point
// summary: Entry point that creates and initializes the SkillsWebview page for the full-page Skills UI.
// ---

import '/strings.m.js';

import {SkillsWebview} from './skills_webview.js';

const page = new SkillsWebview();
page.init();
