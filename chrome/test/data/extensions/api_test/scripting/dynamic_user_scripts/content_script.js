// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script test fixture injecting a marker div
// summary: Injects a div with id 'injected_content_script' into pages so the API test can verify that registered content scripts actually run.
// ---

const div = document.createElement('div');
div.id = 'injected_content_script';
document.body.appendChild(div);
