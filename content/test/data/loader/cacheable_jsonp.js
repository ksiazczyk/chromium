// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cacheable JSONP test script
// summary: JavaScript test resource that resolves window._resolve with 'Done' when loaded as a cacheable JSONP response.
// ---

window._resolve('Done');
