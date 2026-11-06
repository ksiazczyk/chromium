// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ==UserScript==
// @name           Document Start Test
// @namespace      test
// @description    This script tests document-start
// @include        *
// @run-at         document-start
// ==/UserScript==

// ---docerion
// type: test
// title: Document-start run-at user script test
// summary: Chromium test user script that runs at document-start and alerts document.readyState to verify the document-start injection point.
// ---

alert(document.readyState);
