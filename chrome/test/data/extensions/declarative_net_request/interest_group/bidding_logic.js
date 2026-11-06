// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bidding logic for interest group ad auction tests
// summary: Mock buyer bidding script that returns a fixed bid and reports the win to the interest group owner during declarative net request extension tests.
// ---

function generateBid(
    interestGroup, auctionSignals, perBuyerSignals, trustedBiddingSignals,
    browserSignals) {
  return {'ad': 'example', 'bid': 1, 'render': 'https://example.com/render'};
}

function reportWin(
    auctionSignals, perBuyerSignals, sellerSignals, browserSignals) {
  sendReportTo(browserSignals.interestGroupOwner + '/echo?bidder_report');
}
