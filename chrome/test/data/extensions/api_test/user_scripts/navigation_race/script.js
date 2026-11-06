// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: UserScripts navigation race injected user script
// summary: User script injected by the test that sets the document title to 'Injected' as the payload for the execute call under test.
// ---

document.title = 'Injected';
