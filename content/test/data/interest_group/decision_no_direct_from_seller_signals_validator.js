// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Seller decision logic validating absent direct-from-seller signals
// summary: Test seller decision logic that validates directFromSellerSignals are null and enables component auctions when auctionSignals allow them.
// ---

function scoreAd(
    adMetadata, bid, auctionConfig, trustedScoringSignals,
    browserSignals, directFromSellerSignals) {
  validateDirectFromSellerSignals(directFromSellerSignals);
  // `auctionSignals` controls whether or not component auctions are allowed.
  let allowComponentAuction =
      typeof auctionConfig.auctionSignals === 'string' &&
      auctionConfig.auctionSignals.includes('sellerAllowsComponentAuction');
  return {desirability: bid,
          allowComponentAuction:allowComponentAuction};
}

function validateDirectFromSellerSignals(directFromSellerSignals) {
  const sellerSignalsJSON =
      JSON.stringify(directFromSellerSignals.sellerSignals);
  if (sellerSignalsJSON !== 'null') {
    throw 'Wrong directFromSellerSignals.sellerSignals ' +
        sellerSignalsJSON;
  }
  const auctionSignalsJSON =
      JSON.stringify(directFromSellerSignals.auctionSignals);
  if (auctionSignalsJSON !== 'null') {
    throw 'Wrong directFromSellerSignals.auctionSignals ' +
        auctionSignalsJSON;
  }
}
