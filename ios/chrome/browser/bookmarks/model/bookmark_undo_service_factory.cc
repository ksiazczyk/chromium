// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BookmarkUndoServiceFactory implementation
// summary: Profile-keyed service factory that creates the BookmarkUndoService instance for each iOS profile.
// ---

#include "ios/chrome/browser/bookmarks/model/bookmark_undo_service_factory.h"

#include "components/undo/bookmark_undo_service.h"
#include "ios/chrome/browser/shared/model/profile/profile_ios.h"

namespace ios {

BookmarkUndoServiceFactory::BookmarkUndoServiceFactory(PassKey key)
    : TypedProfileKeyedServiceFactoryIOS(std::move(key),
                                         "BookmarkUndoService") {}

std::unique_ptr<KeyedService>
BookmarkUndoServiceFactory::BuildServiceInstanceFor(ProfileIOS* profile) const {
  return std::make_unique<BookmarkUndoService>();
}

}  // namespace ios
