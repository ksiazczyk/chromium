// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ClientHints struct implementation
// summary: Defines the default constructors, destructor, and assignment operator for the ClientHints struct.
// ---

#include "chrome/test/chromedriver/chrome/client_hints.h"

ClientHints::ClientHints() = default;

ClientHints::ClientHints(const ClientHints&) = default;

ClientHints::~ClientHints() = default;

ClientHints& ClientHints::operator=(const ClientHints&) = default;
