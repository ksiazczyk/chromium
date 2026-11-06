// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dedicated worker GPC reporting script
// summary: Dedicated worker script that replies to messages with whether navigator.globalPrivacyControl is true.
// ---

self.onmessage = async e => {
  self.postMessage(self.navigator.globalPrivacyControl === true);
};
