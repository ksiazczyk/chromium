// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App list item list observer header
// summary: Declares the observer interface notified when app list items are added to, removed from or moved within an item list.
// relations:
//   - depends_on /ash/app_list/model/app_list_model_export.h
//   - depends_on /base/observer_list_types.h
// ---

#ifndef ASH_APP_LIST_MODEL_APP_LIST_ITEM_LIST_OBSERVER_H_
#define ASH_APP_LIST_MODEL_APP_LIST_ITEM_LIST_OBSERVER_H_

#include <stddef.h>

#include "ash/app_list/model/app_list_model_export.h"
#include "base/observer_list_types.h"

namespace ash {

class AppListItem;

class APP_LIST_MODEL_EXPORT AppListItemListObserver
    : public base::CheckedObserver {
 public:
  // Triggered after |item| has been added to the list at |index|.
  virtual void OnListItemAdded(size_t index, AppListItem* item) {}

  // Triggered after an item has been removed from the list at |index|, just
  // before the item is deleted.
  virtual void OnListItemRemoved(size_t index, AppListItem* item) {}

  // Triggered after |item| has been moved from |from_index| to |to_index|.
  // Note: |from_index| may equal |to_index| if only the ordinal has changed.
  virtual void OnListItemMoved(size_t from_index,
                               size_t to_index,
                               AppListItem* item) {}

 protected:
  ~AppListItemListObserver() override;
};

}  // namespace ash

#endif  // ASH_APP_LIST_MODEL_APP_LIST_ITEM_LIST_OBSERVER_H_
