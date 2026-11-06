// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Small test script under the size limit
// summary: Small test fixture script that injects a div with id 'small' and stays under the executeScript size limit.
// ---

const div = document.createElement('div');
div.id = 'small';
document.body.appendChild(div);
