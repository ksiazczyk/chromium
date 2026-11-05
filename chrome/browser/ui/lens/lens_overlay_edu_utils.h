// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lens overlay EDU action chip utilities header
// summary: Declares helpers that decide whether to show the Lens overlay EDU action chip and record that it was shown.
// ---

#ifndef CHROME_BROWSER_UI_LENS_LENS_OVERLAY_EDU_UTILS_H_
#define CHROME_BROWSER_UI_LENS_LENS_OVERLAY_EDU_UTILS_H_

class Profile;

namespace lens {

// Whether the EDU action chip is enabled and has not been shown too many times.
bool ShouldShowLensOverlayEduActionChip(Profile* profile);

// Records that the Lens Overlay EDU action chip has been shown by incrementing
// the counter and setting the last shown time.
void RecordLensOverlayEduActionChipShown(Profile* profile);

}  // namespace lens

#endif  // CHROME_BROWSER_UI_LENS_LENS_OVERLAY_EDU_UTILS_H_
