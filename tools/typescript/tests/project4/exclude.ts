// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: exclude.ts test fixture
// summary: Test fixture that imports hello from include.js and logs it, used to exercise exclusion behavior in the TypeScript project tests.
// ---

import {hello} from './include.js';

function sayHello(): void {
  console.info(hello());
}

sayHello();
