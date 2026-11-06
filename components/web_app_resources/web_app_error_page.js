// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Web app error page script
// summary: Script that repositions the error container and shows the offline icon on the web app error page depending on the supplementary icon.
// ---

const centerContainer = document.getElementById('centerContainer');
const errorContainer = document.getElementById('errorContainer');
const supplementaryIcon = document.getElementById('$i18n{supplementary_icon}');

if (supplementaryIcon !== null && supplementaryIcon.id === 'offlineIcon') {
  centerContainer.append(errorContainer);
  supplementaryIcon.style.display = 'inline';
} else {
  errorContainer.classList.add('center-bottom');
}
