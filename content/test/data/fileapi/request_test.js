// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: FileAPI request test script
// summary: Browser test that requests a temporary filesystem via webkitRequestFileSystem and reports success or failure through the shared helpers.
// ---

function requestFileSystemSuccess(fs)
{
  debug('Requested successfully.');
  done();
}

function test()
{
  debug('Requesting FileSystem');
  window.webkitRequestFileSystem(
      window.TEMPORARY,
      1024 * 1024,
      requestFileSystemSuccess,
      unexpectedErrorCallback);
}
