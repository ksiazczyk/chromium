// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Seller decision logic validating direct-from-seller sellerSignals
// summary: Test seller decision logic that validates directFromSellerSignals.sellerSignals against an expected JSON value before returning the bid.
// ---

function scoreAd(
    adMetadata, bid, auctionConfig, trustedScoringSignals,
    browserSignals, directFromSellerSignals) {
  validateDirectFromSellerSignals(directFromSellerSignals);
  return bid;
}

function validateDirectFromSellerSignals(directFromSellerSignals) {
  // To keep things sipmle, just validate sellerSignals.
  const sellerSignalsJSON =
      JSON.stringify(directFromSellerSignals.sellerSignals);
  if (sellerSignalsJSON !== '{"json":"for","the":["seller"]}') {
    throw 'Wrong directFromSellerSignals.sellerSignals ' +
        sellerSignalsJSON;
  }
}
