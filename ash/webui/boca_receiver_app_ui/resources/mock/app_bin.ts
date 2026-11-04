// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock Boca Receiver app placeholder entry point
// summary: TypeScript entry point that appends a placeholder boca-receiver-app element telling users to build branded Chrome for the official app.
// ---

const bocaReceiverApp = document.createElement('boca-receiver-app');
bocaReceiverApp.textContent = `Please build branded Chrome (set
is_chrome_branded = true) for the official Boca Receiver app.`;
document.body.appendChild(bocaReceiverApp);
