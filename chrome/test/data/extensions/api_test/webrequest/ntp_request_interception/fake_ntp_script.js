// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake NTP script
// summary: Test script that sets window.scriptExecuted to true so the webrequest extension test can verify whether the fake NTP script was executed.
// ---

window.scriptExecuted = true;
