// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Deprecated render URL replacements validator decision logic
// summary: Seller worklet test script whose scoreAd validates deprecatedRenderURLReplacements against expected values and controls component auctions.
// ---

function scoreAd(
    adMetadata, bid, auctionConfig, trustedScoringSignals,
    browserSignals) {
    validateDeprecatedRenderURLReplacements(
        auctionConfig.deprecatedRenderURLReplacements,
        auctionConfig.sellerSignals.deprecatedRenderURLReplacementsExpected);
    // `auctionSignals` controls whether or not component auctions are allowed.
    let allowComponentAuction =
        typeof auctionConfig.auctionSignals === 'string' &&
        auctionConfig.auctionSignals.includes('sellerAllowsComponentAuction');
    return {
        desirability: bid,
        allowComponentAuction: allowComponentAuction
    };
}

function validateDeprecatedRenderURLReplacements(
    deprecatedRenderURLReplacements,
    deprecatedRenderURLReplacementsExpected) {
    const replacementsExpectedJSON =
        JSON.stringify(deprecatedRenderURLReplacementsExpected);
    const replacementsJSON =
        JSON.stringify(deprecatedRenderURLReplacements);

    if (replacementsJSON !== replacementsExpectedJSON) {
        throw 'Wrong deprecatedRenderURLReplacements ' +
        replacementsJSON + " should be " + replacementsExpectedJSON;
    }
}
