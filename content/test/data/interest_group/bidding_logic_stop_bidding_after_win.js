// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bidding logic stopping after a win
// summary: Test bidder worklet that bids 2 until it has a previous win, then bids 0 to stop bidding, and reports the win to an echo endpoint.
// ---

function generateBid(
  interestGroup, auctionSignals, perBuyerSignals, trustedBiddingSignals,
  browserSignals) {
const bid = browserSignals.prevWins.length < 1 ? 2 : 0;
return {
  'ad': 'example',
  'bid': bid,
  'render': interestGroup.ads[0].renderURL
};
}

function reportWin(
  auctionSignals, perBuyerSignals, sellerSignals, browserSignals) {
sendReportTo(
    browserSignals.interestGroupOwner +
    '/echoall?report_bidder_stop_bidding_after_win&' +
    browserSignals.interestGroupName);
}
