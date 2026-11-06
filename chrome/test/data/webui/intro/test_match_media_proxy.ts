// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test match media proxy
// summary: Test double implementing MatchMediaProxy backed by a fake media query list for finish-or-continue page tests.
// ---

import type {MatchMediaProxy} from 'chrome://intro/finish_or_continue/match_media_proxy.js';
import {FakeMediaQueryList} from 'chrome://webui-test/fake_media_query_list.js';

export class TestMatchMediaProxy implements MatchMediaProxy {
  private mediaQueryList_: FakeMediaQueryList = new FakeMediaQueryList('dummy');

  matchMedia(_query: string): MediaQueryList {
    return this.mediaQueryList_ as unknown as MediaQueryList;
  }

  setMatchMediaMatches(matches: boolean): void {
    this.mediaQueryList_.matches = matches;
  }
}
