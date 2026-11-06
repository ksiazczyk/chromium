// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Save to Photos availability declaration
// summary: Declares IsSaveToPhotosAvailable, which reports whether the Save to Photos entry point can be presented for a given profile.
// ---

#ifndef IOS_CHROME_BROWSER_PHOTOS_MODEL_PHOTOS_AVAILABILITY_H_
#define IOS_CHROME_BROWSER_PHOTOS_MODEL_PHOTOS_AVAILABILITY_H_

class ProfileIOS;

// Returns whether the Save to Photos entry point can be presented for a given
// profile.
bool IsSaveToPhotosAvailable(ProfileIOS* profile);

#endif  // IOS_CHROME_BROWSER_PHOTOS_MODEL_PHOTOS_AVAILABILITY_H_
