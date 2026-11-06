// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bidding logic that never bids
// summary: Test bidding script whose generateBid returns zero so the bidder never places a bid in ad auction tests.
// ---

function generateBid(
    interestGroup, auctionSignals, perBuyerSignals, trustedBiddingSignals,
    browserSignals, directFromSellerSignals) {
  return 0;
}
