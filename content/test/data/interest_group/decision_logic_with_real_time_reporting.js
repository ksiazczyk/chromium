// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Seller decision logic with real-time reporting contributions
// summary: Test seller decision logic whose scoreAd contributes bid-based buckets to the real-time reporting histogram and whose reportResult sends the seller report.
// ---

function scoreAd(
    adMetadata, bid, auctionConfig, trustedScoringSignals, browserSignals) {
  realTimeReporting.contributeToHistogram(
      {bucket: 200 + bid, priorityWeight: 1.5});
  return bid;
}

function reportResult(auctionConfig, browserSignals) {
  sendReportTo(auctionConfig.seller + '/echoall?report_seller');
}
