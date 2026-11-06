// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Seller decision logic with forDebuggingOnly auction reports
// summary: Test seller decision logic that reports debug auction win and loss URLs via forDebuggingOnly and sends the seller report in reportResult.
// ---

function scoreAd(
    adMetadata, bid, auctionConfig, trustedScoringSignals, browserSignals) {
  forDebuggingOnly.reportAdAuctionLoss(
      auctionConfig.seller + '/echo?seller_debug_report_loss/' + adMetadata);
  forDebuggingOnly.reportAdAuctionWin(
      auctionConfig.seller + '/echo?seller_debug_report_win/' + adMetadata);
  return bid;
}

function reportResult(auctionConfig, browserSignals) {
  sendReportTo(auctionConfig.seller + '/echoall?report_seller');
}
