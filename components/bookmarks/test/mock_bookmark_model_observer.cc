// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock bookmark model observer implementation
// summary: Implements the constructor and destructor of the mock bookmark model observer used by bookmark tests.
// ---

#include "components/bookmarks/test/mock_bookmark_model_observer.h"

namespace bookmarks {

MockBookmarkModelObserver::MockBookmarkModelObserver() = default;

MockBookmarkModelObserver::~MockBookmarkModelObserver() = default;

}  // namespace bookmarks
