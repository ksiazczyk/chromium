// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page content screenshot service factory implementation
// summary: Implements the profile-keyed factory that creates PageContentScreenshotService instances for browser profiles.
// ---

#include "chrome/browser/page_content_annotations/page_content_screenshot_service_factory.h"

#include <utility>

#include "base/no_destructor.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/profiles/profile_keyed_service_factory.h"
#include "components/page_content_annotations/content/page_content_screenshot_service.h"

namespace page_content_annotations {

// static
PageContentScreenshotService*
PageContentScreenshotServiceFactory::GetForProfile(Profile* profile) {
  return static_cast<PageContentScreenshotService*>(
      GetInstance()->GetServiceForBrowserContext(profile, true));
}

PageContentScreenshotServiceFactory::PageContentScreenshotServiceFactory()
    : ProfileKeyedServiceFactory(
          "PageContentScreenshotService",
          ProfileSelections::Builder()
              .WithRegular(ProfileSelection::kOwnInstance)
              .Build()) {}

// static
PageContentScreenshotServiceFactory*
PageContentScreenshotServiceFactory::GetInstance() {
  static base::NoDestructor<PageContentScreenshotServiceFactory> factory;
  return factory.get();
}

PageContentScreenshotServiceFactory::~PageContentScreenshotServiceFactory() =
    default;

std::unique_ptr<KeyedService>
PageContentScreenshotServiceFactory::BuildServiceInstanceForBrowserContext(
    content::BrowserContext* context) const {
  return std::make_unique<PageContentScreenshotService>();
}

}  // namespace page_content_annotations
