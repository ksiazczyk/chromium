// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: foo_with_css.js CSS import test fixture
// summary: Test fixture importing foo.css as a CSS module and adopting it into a shadow root to exercise CSS import bundling.
// ---

import './foo.js';

import sheet from './foo.css' with {type : 'css'};

document.getElementById('foo').shadowRoot.adoptedStyleSheets = [sheet];
