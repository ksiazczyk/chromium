// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test store
// summary: Test double of the bookmarks store that can replace the singleton with custom state and the bookmarks reducer.
// ---

import type {BookmarksPageState} from 'chrome://bookmarks/bookmarks.js';
import {createEmptyState, reduceAction, Store} from 'chrome://bookmarks/bookmarks.js';
import {TestStore as CrUiTestStore} from 'chrome://webui-test/test_store.js';

export class TestStore extends CrUiTestStore<BookmarksPageState> {
  constructor(data: Partial<BookmarksPageState>) {
    super(data, createEmptyState(), reduceAction);
  }

  replaceSingleton() {
    Store.setInstance(this);
  }
}
