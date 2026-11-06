// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker with one imported script
// summary: Service worker test script that imports long_lived_import.js via importScripts to exercise script import handling.
// ---

importScripts('long_lived_import.js');
