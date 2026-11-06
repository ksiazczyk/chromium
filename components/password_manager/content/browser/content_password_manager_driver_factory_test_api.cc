// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Driver factory test API implementation
// summary: Implements static test helpers that construct a ContentPasswordManagerDriverFactory and access its per-frame drivers for use in unit tests.
// ---

#include "components/password_manager/content/browser/content_password_manager_driver_factory_test_api.h"

namespace password_manager {

// static
std::unique_ptr<ContentPasswordManagerDriverFactory>
ContentPasswordManagerDriverFactoryTestApi::Create(
    content::WebContents* web_contents,
    PasswordManagerClient* password_manager_client) {
  return base::WrapUnique(new ContentPasswordManagerDriverFactory(
      web_contents, password_manager_client));
}

// static
ContentPasswordManagerDriver*
ContentPasswordManagerDriverFactoryTestApi::GetDriverForFrame(
    ContentPasswordManagerDriverFactory* factory,
    content::RenderFrameHost* render_frame_host) {
  return factory->GetDriverForFrame(render_frame_host);
}

}  // namespace password_manager
