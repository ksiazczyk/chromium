// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DevTools client basics
// summary: Defines constructors and destructors for the InspectorEvent and InspectorCommandResponse structs used by the DevTools client.
// ---

#include "chrome/test/chromedriver/chrome/devtools_client.h"

InspectorEvent::InspectorEvent() = default;

InspectorEvent::~InspectorEvent() = default;

InspectorEvent::InspectorEvent(InspectorEvent&& other) = default;

InspectorCommandResponse::InspectorCommandResponse() = default;

InspectorCommandResponse::~InspectorCommandResponse() = default;

InspectorCommandResponse::InspectorCommandResponse(
    InspectorCommandResponse&& other) = default;
