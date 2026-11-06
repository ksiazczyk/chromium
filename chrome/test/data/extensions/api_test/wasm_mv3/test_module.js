// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebAssembly MV3 test suite module
// summary: Defines tests verifying that streaming fetch and ArrayBuffer instantiation of a minimal Wasm module are allowed in MV3 extension contexts.
// ---

export async function runTests() {
  chrome.test.runTests([
    // Attempts to fetch and instantiate a simple Wasm module.
    async function instantiateFetch() {
      const response = await fetch('empty.wasm');

      let wasmAllowed;
      try {
        const instance = await WebAssembly.instantiateStreaming(response);
        wasmAllowed = true;
      } catch (e) {
        wasmAllowed = false;
      }
      chrome.test.assertTrue(wasmAllowed);
      chrome.test.succeed();
    },

    // Attempts to instantiate a simple Wasm module.
    async function instantiateArrayBuffer() {
      // The smallest possible Wasm module. Just the header (0, "A", "S", "M"),
      // and the version (0x1).
      const bytes = new Uint8Array([0, 0x61, 0x73, 0x6d, 0x1, 0, 0, 0]);

      let wasmAllowed;
      try {
        const instance = await WebAssembly.instantiate(bytes);
        wasmAllowed = true;
      } catch (e) {
        wasmAllowed = false;
      }

      chrome.test.assertTrue(wasmAllowed);
      chrome.test.succeed();
    },
  ]);
}
