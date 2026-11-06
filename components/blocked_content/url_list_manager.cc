// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: URL list manager implementation
// summary: Implements UrlListManager, which notifies observers when a blocked URL is added to drive redirect and popup blocked UI surfaces.
// ---

#include "components/blocked_content/url_list_manager.h"
#include "base/observer_list.h"

namespace blocked_content {

UrlListManager::UrlListManager() = default;

UrlListManager::~UrlListManager() = default;

void UrlListManager::AddObserver(Observer* observer) {
  observers_.AddObserver(observer);
}

void UrlListManager::RemoveObserver(Observer* observer) {
  observers_.RemoveObserver(observer);
}

void UrlListManager::NotifyObservers(int32_t id, const GURL& url) {
  for (auto& observer : observers_) {
    observer.BlockedUrlAdded(id, url);
  }
}

}  // namespace blocked_content
