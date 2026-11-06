// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Decision logic registering ad beacons
// summary: Seller worklet test script that allows component auctions and registers click and top-navigation ad beacons when reporting results.
// ---

function scoreAd(adMetadata, bid, auctionConfig, trustedScoringSignals,
  browserSignals) {
  // `auctionSignals` controls whether or not component auctions are allowed.
  let allowComponentAuction =
    typeof auctionConfig.auctionSignals === 'string' &&
    auctionConfig.auctionSignals.includes('sellerAllowsComponentAuction');
  return {
    desirability: bid,
    allowComponentAuction: allowComponentAuction
  };
}

function reportResult(auctionConfig, browserSignals) {
  registerAdBeacon({
    'click': browserSignals.interestGroupOwner + "/report_event.html",
    'reserved.top_navigation_commit':
      browserSignals.interestGroupOwner + "/report_event.html"
  });
}
