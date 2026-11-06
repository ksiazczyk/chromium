// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Implementation of the fake overlay user data
// summary: Implements the FakeOverlayUserData constructor that stores an arbitrary pointer value for test overlay requests and responses.
// ---

#include "ios/chrome/browser/overlays/model/test/fake_overlay_user_data.h"

FakeOverlayUserData::FakeOverlayUserData(void* value) : value_(value) {}
