// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Pair UI action enums
// summary: Declares the Quick Pair UI action enums for discovery, account association, companion app, and pairing failure, plus their stream operators.
// ---

#ifndef ASH_QUICK_PAIR_UI_ACTIONS_H_
#define ASH_QUICK_PAIR_UI_ACTIONS_H_

#include <ostream>

namespace ash {
namespace quick_pair {

enum class DiscoveryAction {
  kPairToDevice = 0,
  kDismissedByUser = 1,
  kDismissedByOs = 2,
  kLearnMore = 3,
  kDismissedByTimeout = 4,
};

enum class AssociateAccountAction {
  kAssociateAccount = 0,
  kLearnMore = 1,
  kDismissedByUser = 2,
  kDismissedByOs = 3,
  kDismissedByTimeout = 4,
};

enum class CompanionAppAction {
  kDownloadAndLaunchApp = 0,
  kLaunchApp = 1,
  kDismissedByUser = 2,
  kDismissed = 3
};

enum class PairingFailedAction {
  kNavigateToSettings = 0,
  kDismissedByUser = 1,
  kDismissed = 2
};

std::ostream& operator<<(std::ostream& stream, DiscoveryAction protocol);

std::ostream& operator<<(std::ostream& stream, AssociateAccountAction protocol);

std::ostream& operator<<(std::ostream& stream, CompanionAppAction protocol);

std::ostream& operator<<(std::ostream& stream, PairingFailedAction protocol);

}  // namespace quick_pair
}  // namespace ash

#endif  // ASH_QUICK_PAIR_UI_ACTIONS_H_
