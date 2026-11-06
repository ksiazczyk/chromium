// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Worker test helper using importScripts
// summary: Dedicated worker script that loads worker.js via importScripts, letting tests check back/forward cache behavior for workers that import scripts.
// ---

self.importScripts('worker.js');
