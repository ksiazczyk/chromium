// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Seller decision logic that throws in scoreAd
// summary: Test seller decision logic whose scoreAd throws an error, used to exercise auction error handling.
// ---

function scoreAd(
    adMetadata, bid, auctionConfig, trustedScoringSignals,
    browserSignals) {
  throw 'Here\'s an error';
}
