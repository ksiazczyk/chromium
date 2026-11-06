// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: User education element events
// summary: Declares an exported custom element event type for user education, such as the help bubble next-button clicked event.
// ---

#ifndef COMPONENTS_USER_EDUCATION_COMMON_USER_EDUCATION_EVENTS_H_
#define COMPONENTS_USER_EDUCATION_COMMON_USER_EDUCATION_EVENTS_H_

#include "base/component_export.h"
#include "ui/base/interaction/element_tracker.h"

namespace user_education {

DECLARE_EXPORTED_CUSTOM_ELEMENT_EVENT_TYPE(
    COMPONENT_EXPORT(USER_EDUCATION_COMMON_EVENTS),
    kHelpBubbleNextButtonClickedEvent);

}  // namespace user_education

#endif  // COMPONENTS_USER_EDUCATION_COMMON_USER_EDUCATION_EVENTS_H_
