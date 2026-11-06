// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Installable ambient badge client interface
// summary: Interface that lets AppBannerManagerAndroid handle user interactions with the installable ambient badge, such as triggering add to home screen or reporting dismissal and ignoring.
// ---

#ifndef COMPONENTS_WEBAPPS_BROWSER_ANDROID_INSTALLABLE_INSTALLABLE_AMBIENT_BADGE_CLIENT_H_
#define COMPONENTS_WEBAPPS_BROWSER_ANDROID_INSTALLABLE_INSTALLABLE_AMBIENT_BADGE_CLIENT_H_

namespace webapps {

// An interface for AppBannerManagerAndroid to handle user interactions with
// installable ambient badge infobar or message.
class InstallableAmbientBadgeClient {
 public:
  // Called to trigger the add to home screen flow.
  virtual void AddToHomescreenFromBadge() = 0;

  // Called to inform the client that the badge was dismissed.
  virtual void BadgeDismissed() = 0;

  // Called to inform the client that the badge was ignored.
  virtual void BadgeIgnored() = 0;

  virtual ~InstallableAmbientBadgeClient() = default;
};

}  // namespace webapps

#endif  // COMPONENTS_WEBAPPS_BROWSER_ANDROID_INSTALLABLE_INSTALLABLE_AMBIENT_BADGE_CLIENT_H_