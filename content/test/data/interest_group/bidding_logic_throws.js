// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bidding logic that throws
// summary: Test bidder worklet whose generateBid reports a debug auction loss and then throws an error, with an unreachable loss report after the throw.
// ---

function generateBid(
    interestGroup, auctionSignals, perBuyerSignals, trustedBiddingSignals,
    browserSignals) {
  forDebuggingOnly.reportAdAuctionLoss(
    interestGroup.owner + '/echo?bidder_debug_report_loss/' +
    interestGroup.name + '/before_error');

  throw 'Here\'s an error';

  forDebuggingOnly.reportAdAuctionLoss(
    interestGroup.owner + '/echo?bidder_debug_report_loss/' +
    interestGroup.name + '/after_error');
}
