// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// A worker that imports "empty.js" and also accepts a URL parameter like
// "?import=script.js" and imports "script.js".

// ---docerion
// type: test
// title: Dedicated worker importScripts test script
// summary: Dedicated worker test script that imports empty.js plus a script given by an import URL parameter and posts DONE when finished.
// ---

const url = new URL(self.location);
const import_url = url.searchParams.get('import');

importScripts('empty.js');
importScripts(import_url);

self.postMessage('DONE');
