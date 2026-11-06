// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Intentionally broken script for error console testing
// summary: JavaScript that deliberately throws an error by assigning to an undefined object, used to test the extension error console.
// ---

foo.bar = baz;
