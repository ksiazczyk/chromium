// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Decision logic for interest group ad auction tests
// summary: Mock seller scoring script that returns the bid unchanged and reports the auction result to the interest group owner during extension tests.
// ---

function scoreAd(
    adMetadata, bid, auctionConfig, trustedScoringSignals, browserSignals) {
  return bid;
}

function reportResult(auctionConfig, browserSignals) {
  sendReportTo(browserSignals.interestGroupOwner + '/echo?decision_report');
  return 'signalsForWinner';
}
