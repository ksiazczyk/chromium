// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TutorialIdentifier type alias
// summary: Defines TutorialIdentifier as a std::string handle used to reference registered tutorials.
// ---

#ifndef COMPONENTS_USER_EDUCATION_COMMON_TUTORIAL_TUTORIAL_IDENTIFIER_H_
#define COMPONENTS_USER_EDUCATION_COMMON_TUTORIAL_TUTORIAL_IDENTIFIER_H_

#include <string>

namespace user_education {

// TutorialIdentifier is used as a handle for Tutorials.
using TutorialIdentifier = std::string;

}  // namespace user_education

#endif  // COMPONENTS_USER_EDUCATION_COMMON_TUTORIAL_TUTORIAL_IDENTIFIER_H_
