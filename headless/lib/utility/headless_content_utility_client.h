// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Headless content utility client header
// summary: Declares HeadlessContentUtilityClient, a ContentUtilityClient subclass that registers main-thread services for the headless utility process.
// ---

#ifndef HEADLESS_LIB_UTILITY_HEADLESS_CONTENT_UTILITY_CLIENT_H_
#define HEADLESS_LIB_UTILITY_HEADLESS_CONTENT_UTILITY_CLIENT_H_

#include "content/public/utility/content_utility_client.h"
#include "headless/public/headless_export.h"

namespace headless {

class HEADLESS_EXPORT HeadlessContentUtilityClient
    : public content::ContentUtilityClient {
 public:
  HeadlessContentUtilityClient();

  HeadlessContentUtilityClient(const HeadlessContentUtilityClient&) = delete;
  HeadlessContentUtilityClient& operator=(const HeadlessContentUtilityClient&) =
      delete;

  ~HeadlessContentUtilityClient() override;

 private:
  // content::ContentUtilityClient:
  void RegisterMainThreadServices(mojo::ServiceFactory& services) override;
};

}  // namespace headless

#endif  // HEADLESS_LIB_UTILITY_HEADLESS_CONTENT_UTILITY_CLIENT_H_
