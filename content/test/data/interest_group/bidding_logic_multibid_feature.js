// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Multibid feature bidding logic
// summary: Test bidding script that returns a bid equal to the multi-bid limit using the first ad's render URL.
// ---

// Basic generate bid script that offers a bid using the first ad's
// `renderURL` with the multibid limit as the bid.
function generateBid(interestGroup, auctionSignals, perBuyerSignals,
                     trustedBiddingSignals, browserSignals) {
  const ad = interestGroup.ads[0];
  let result = {'bid': browserSignals.multiBidLimit, 'render': ad.renderURL};
  return [result];
}

function reportWin(auctionSignals, perBuyerSignals, sellerSignals,
                   browserSignals) {
  sendReportTo(browserSignals.interestGroupOwner + '/echoall?report_bidder' +
               browserSignals.bid);
}
