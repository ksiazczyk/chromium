// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome most visited sites factory header
// summary: Declares the ChromeMostVisitedSitesFactory class whose NewForProfile returns a per-profile MostVisitedSites.
// ---

#ifndef CHROME_BROWSER_NTP_TILES_CHROME_MOST_VISITED_SITES_FACTORY_H_
#define CHROME_BROWSER_NTP_TILES_CHROME_MOST_VISITED_SITES_FACTORY_H_

#include <memory>

class Profile;

namespace ntp_tiles {
class MostVisitedSites;
}  // namespace ntp_tiles

class ChromeMostVisitedSitesFactory {
 public:
  static std::unique_ptr<ntp_tiles::MostVisitedSites> NewForProfile(
      Profile* profile);

  ChromeMostVisitedSitesFactory() = delete;
};

#endif  // CHROME_BROWSER_NTP_TILES_CHROME_MOST_VISITED_SITES_FACTORY_H_
