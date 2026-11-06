// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IOS popular sites factory header
// summary: Declares the factory entry point that creates a PopularSites object for an iOS profile.
// ---

#ifndef IOS_CHROME_BROWSER_NTP_TILES_MODEL_IOS_POPULAR_SITES_FACTORY_H_
#define IOS_CHROME_BROWSER_NTP_TILES_MODEL_IOS_POPULAR_SITES_FACTORY_H_

#import <memory>

class ProfileIOS;

namespace ntp_tiles {
class PopularSites;
}

class IOSPopularSitesFactory {
 public:
  static std::unique_ptr<ntp_tiles::PopularSites> NewForBrowserState(
      ProfileIOS* profile);
};

#endif  // IOS_CHROME_BROWSER_NTP_TILES_MODEL_IOS_POPULAR_SITES_FACTORY_H_
