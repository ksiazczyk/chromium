// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SharingApp implementation
// summary: Implements the SharingApp struct constructors and destructor for apps shown in sharing dialogs.
// ---

#include "components/sharing_message/sharing_app.h"

SharingApp::SharingApp(const gfx::VectorIcon* vector_icon,
                       const gfx::Image& image,
                       std::u16string name,
                       std::string identifier)
    : vector_icon(vector_icon),
      image(image),
      name(std::move(name)),
      identifier(std::move(identifier)) {}

SharingApp::SharingApp(SharingApp&& other) = default;

SharingApp::~SharingApp() = default;
