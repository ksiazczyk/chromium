// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock Boca app placeholder script
// summary: TypeScript that creates a boca-app element telling users to build branded Chrome for the official Boca app.
// ---

const bocaApp = document.createElement('boca-app');
bocaApp.textContent = `Please build branded Chrome (set is_chrome_branded =
true) for the official Boca app.`;
document.body.appendChild(bocaApp);
