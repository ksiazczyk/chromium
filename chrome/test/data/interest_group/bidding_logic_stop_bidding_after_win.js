// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bidding logic that stops bidding after a win
// summary: Test bidder script that bids 2 only when it has no previous wins, then reports the win to the owner's echo endpoint.
// ---

function generateBid(
  interestGroup, auctionSignals, perBuyerSignals, trustedBiddingSignals,
  browserSignals) {
const bid = browserSignals.prevWins.length < 1 ? 2 : 0;
return {
  'ad': 'example',
  'bid': bid,
  'render': 'https://stop_bidding_after_win.com/render'
};
}

function reportWin(
  auctionSignals, perBuyerSignals, sellerSignals, browserSignals) {
sendReportTo(
    browserSignals.interestGroupOwner +
    '/echoall?report_bidder_stop_bidding_after_win');
}
