// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Decision logic reporting to seller signals URL
// summary: Seller worklet test script that sends a for-debugging win report and reports the result to the URL given in sellerSignals.
// ---

function scoreAd(
    adMetadata, bid, auctionConfig, trustedScoringSignals, browserSignals) {
  forDebuggingOnly.reportAdAuctionWin(
    auctionConfig.sellerSignals.reportTo + '_debug_win_report');
  return bid;
}

function reportResult(
  auctionConfig, browserSignals) {
  sendReportTo(auctionConfig.sellerSignals.reportTo);
  return {
    'success': true,
    'signalsForWinner': {'signalForWinner': 1},
  };
}
