// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Eche App mock app bundle
// summary: "JavaScript bundle for the mock Eche App web UI that sets the #title header element's text to 'Eche App'."
// ---

const header = document.querySelector('#title');
header.textContent = 'Eche App';
