// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// WebGL is not guaranteed to be supported everywhere except when using
// --enable-unsafe-swiftshader.
// META: --enable-unsafe-swiftshader

// ---docerion
// type: test
// title: WebGL canvas context test
// summary: Headless protocol test that creates a canvas, calls getContext("webgl") in the page, and checks that a valid WebGLRenderingContext is returned, using SwiftShader.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const {session} = await testRunner.startBlank(
      'Tests that canvas.getContext("webgl") returns a valid context.');

  const result = await session.evaluate(`
    (() => {
      const canvas = document.createElement('canvas');
      const context = canvas.getContext('webgl');
      if (!context) {
        return 'getContext("webgl") returned null';
      }
      if (!(context instanceof WebGLRenderingContext)) {
        return 'Context is not a WebGLRenderingContext';
      }
      return 'Got a valid WebGL context';
    })()
  `);

  testRunner.log(result);

  testRunner.completeTest();
});
