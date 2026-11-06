// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ==UserScript==
// @name           Document End Test
// @namespace      test
// @description    This script tests document-end
// @include        *
// @run-at         document-end
// ==/UserScript==

// ---docerion
// type: test
// title: Document-end run-at user script test
// summary: Chromium test user script that runs at document-end and alerts document.readyState to verify the document-end injection point.
// ---

alert(document.readyState);
