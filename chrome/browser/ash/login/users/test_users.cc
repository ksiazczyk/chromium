// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: SAML test user email constants
// summary: Defines constant test user email addresses used by SAML-related tests in the ash namespace.
// ---

#include "chrome/browser/ash/login/users/test_users.h"

namespace ash::saml_test_users {

const char kFirstUserCorpExampleComEmail[] = "alice@corp.example.com";
const char kSecondUserCorpExampleComEmail[] = "bob@corp.example.com";
const char kThirdUserCorpExampleComEmail[] = "carol@corp.example.com";
const char kFourthUserCorpExampleTestEmail[] = "dan@corp.example.test";
const char kFifthUserExampleTestEmail[] = "eve@example.test";
const char kSixthUserCorpExampleTestEmail[] = "frank@example.test";

}  // namespace ash::saml_test_users
