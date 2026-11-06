// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bidding logic expecting top frame a.test
// summary: Test bidding script that bids only when the top window hostname is a.test and sends a win report.
// ---

function generateBid(
    interestGroup, auctionSignals, perBuyerSignals, trustedBiddingSignals,
    browserSignals) {
  const ad = interestGroup.ads[0];
  if (browserSignals.topWindowHostname != 'a.test')
    throw new Error('Unexpected hostname:'  + browserSignals.topWindowHostname);
  return {'ad': ad, 'bid': 1, 'render': ad.renderURL};
}

function reportWin(
    auctionSignals, perBuyerSignals, sellerSignals,
    browserSignals) {
  if (browserSignals.topWindowHostname != 'a.test')
    throw new Error('Unexpected hostname: ' + browserSignals.topWindowHostname);

  sendReportTo(browserSignals.interestGroupOwner + '/echoall?report_bidder');
}
