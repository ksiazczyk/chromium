// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: App install navigation throttle fuzz tests
// summary: Fuzz test checking that ExtractQueryParams can parse arbitrary query strings without crashing, seeded with typical package_id and source examples.
// ---

#include <string_view>

#include "chrome/browser/apps/app_service/app_install/app_install_navigation_throttle.h"
#include "third_party/fuzztest/src/fuzztest/fuzztest.h"

namespace apps {

void ExtractQueryParamsCanParseAnyString(std::string_view query) {
  AppInstallNavigationThrottle::QueryParams params =
      AppInstallNavigationThrottle::ExtractQueryParams(query);
}

FUZZ_TEST(AppInstallNavigationThrottleFuzzTest,
          ExtractQueryParamsCanParseAnyString)
    .WithSeeds({
        "package_id=web:identifier",
        "package_id=android:package",
        "source=getit&package_id=foo:bar",
        "source=showoff",
        "source=mall&package_id=web%3Ahttps%3A%2F%2Fwebsite.com%2F%"
        "3Fsource%3Dshowoff%26param2%3Dvalue",
    });

}  // namespace apps
