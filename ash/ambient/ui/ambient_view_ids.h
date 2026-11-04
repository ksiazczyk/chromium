// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Ambient view ID enum
// summary: Defines an enum of view IDs for the views composing the Ambient UI, intended for easy view access during unit tests.
// ---

#ifndef ASH_AMBIENT_UI_AMBIENT_VIEW_IDS_H_
#define ASH_AMBIENT_UI_AMBIENT_VIEW_IDS_H_

namespace ash {

// IDs used for the views that compose the Ambient UI.
// Use these for easy access to the views during the unittests.
// Note that these IDs are only guaranteed to be unique inside
// |AmbientContainerView|.
enum AmbientViewID {
  // We start at 1000 to prevent potential overlapping of Assistant view ids.
  kAmbientContainerView = 1000,
  kAmbientPhotoView,
  kAmbientBackgroundImageView,
  kAmbientGlanceableInfoView,
  kAmbientMediaStringView,
  kAmbientInfoView,
  kAmbientShieldView,
  kAmbientAnimationView,
  kAmbientVideoWebView,
  kAmbientSlideshowPeripheralUi
};

}  // namespace ash

#endif  // ASH_AMBIENT_UI_AMBIENT_VIEW_IDS_H_
