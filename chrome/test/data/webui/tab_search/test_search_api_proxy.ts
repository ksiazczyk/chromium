// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test search API proxy
// summary: Mock SearchApiProxy for tests that computes case- and accent-insensitive match ranges for search text against target strings.
// ---

import type {SearchApiProxy, TokenRange} from 'chrome://tab-search.top-chrome/tab_search.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

export class TestSearchApiProxy extends TestBrowserProxy implements
    SearchApiProxy {
  private ranges_: TokenRange[][]|null = null;

  constructor() {
    super([
      'getRangesIgnoringCaseAndAccents',
    ]);
  }

  setRanges(ranges: TokenRange[][]) {
    this.ranges_ = ranges;
  }

  getRangesIgnoringCaseAndAccents(searchText: string, targets: string[]) {
    this.methodCalled('getRangesIgnoringCaseAndAccents', [searchText, targets]);
    if (this.ranges_) {
      return Promise.resolve({ranges: this.ranges_});
    }
    const query = searchText.toLowerCase();
    const ranges = targets.map(target => {
      const targetLower = target.toLowerCase();
      const matchRanges: TokenRange[] = [];
      if (query.length > 0) {
        let idx = targetLower.indexOf(query);
        while (idx !== -1) {
          matchRanges.push({start: idx, length: query.length});
          idx = targetLower.indexOf(query, idx + query.length);
        }
      }
      return matchRanges;
    });
    return Promise.resolve({ranges});
  }
}
