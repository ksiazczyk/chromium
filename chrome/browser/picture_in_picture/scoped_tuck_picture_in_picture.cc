// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedTuckPictureInPicture implementation
// summary: Implements an RAII object that notifies the picture-in-picture window manager to tuck windows while it is alive.
// ---

#include "chrome/browser/picture_in_picture/scoped_tuck_picture_in_picture.h"

#include "chrome/browser/picture_in_picture/picture_in_picture_window_manager.h"

ScopedTuckPictureInPicture::ScopedTuckPictureInPicture() {
  PictureInPictureWindowManager::GetInstance()
      ->OnScopedTuckPictureInPictureCreated(
          base::PassKey<ScopedTuckPictureInPicture>());
}

ScopedTuckPictureInPicture::~ScopedTuckPictureInPicture() {
  PictureInPictureWindowManager::GetInstance()
      ->OnScopedTuckPictureInPictureDestroyed(
          base::PassKey<ScopedTuckPictureInPicture>());
}
