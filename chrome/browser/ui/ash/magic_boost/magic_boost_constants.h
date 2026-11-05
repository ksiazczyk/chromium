// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Magic Boost view ID constants
// summary: Defines view IDs for Magic Boost opt-in card views such as the primary and secondary buttons and the title and body labels.
// ---

#ifndef CHROME_BROWSER_UI_ASH_MAGIC_BOOST_MAGIC_BOOST_CONSTANTS_H_
#define CHROME_BROWSER_UI_ASH_MAGIC_BOOST_MAGIC_BOOST_CONSTANTS_H_

namespace chromeos::magic_boost {

// The view ids for Magic Boost related views.
enum ViewId {
  OptInCardSecondaryButton = 1,
  OptInCardPrimaryButton,
  OptInCardTitleLabel,
  OptInCardBodyLabel,
};

}  // namespace chromeos::magic_boost

#endif  // CHROME_BROWSER_UI_ASH_MAGIC_BOOST_MAGIC_BOOST_CONSTANTS_H_
