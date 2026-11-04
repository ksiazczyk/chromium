// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeVox ES6 module loader
// summary: Loads the ChromeVox ES6 module loader and the third-party Speech Rule Engine script for the background context.
// ---

// ChromeVox ES6 modules. Non-ES6 modules cannot depend on these modules.
import './background/es6_loader.js';

// Third party - Speech Rule Engine.
importScripts('../third_party/sre/sre_browser.js');
