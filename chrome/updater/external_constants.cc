// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: External constants base class
// summary: Implements the constructor and destructor of the ExternalConstants chain-of-responsibility base class.
// ---

#include "chrome/updater/external_constants.h"

#include "base/memory/scoped_refptr.h"

namespace updater {

ExternalConstants::ExternalConstants(
    scoped_refptr<ExternalConstants> next_provider)
    : next_provider_(next_provider) {}

ExternalConstants::~ExternalConstants() = default;

}  // namespace updater
