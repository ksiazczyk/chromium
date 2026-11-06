// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bidding logic with invalid ad URL
// summary: Test bidding script that returns a bid with an invalid ad value to exercise invalid ad handling.
// ---

function generateBid(
  interestGroup, auctionSignals, perBuyerSignals, trustedBiddingSignals,
  browserSignals) {
  return {'ad': 'example', 'bid': 1, 'render': 'http://example.com/render'};
}
