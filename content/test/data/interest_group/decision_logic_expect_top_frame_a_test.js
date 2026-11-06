// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Decision logic expecting top frame a.test
// summary: Seller worklet test script that throws unless the top window hostname is a.test and reports the seller auction result.
// ---

function scoreAd(
    adMetadata, bid, auctionConfig, trustedScoringSignals, browserSignals) {
  if (browserSignals.topWindowHostname != 'a.test')
    throw new Error('Unexpected hostname:'  + browserSignals.topWindowHostname);
  return bid;
}

function reportResult(
    auctionConfig, browserSignals) {
  if (browserSignals.topWindowHostname != 'a.test')
    throw new Error('Unexpected hostname:'  + browserSignals.topWindowHostname);
  sendReportTo(auctionConfig.seller + '/echoall?report_seller');
  return {
    'success': true,
    'signalsForWinner': {'signalForWinner': 1},
    'reportUrl': auctionConfig.seller + '/report_seller',
  };
}
