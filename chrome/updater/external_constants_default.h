// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default external constants factory declaration
// summary: Declares the factory function that creates the default external constants provider for the updater.
// ---

#ifndef CHROME_UPDATER_EXTERNAL_CONSTANTS_DEFAULT_H_
#define CHROME_UPDATER_EXTERNAL_CONSTANTS_DEFAULT_H_

#include "base/memory/scoped_refptr.h"

namespace updater {

class ExternalConstants;

scoped_refptr<ExternalConstants> CreateDefaultExternalConstants();

}  // namespace updater

#endif  // CHROME_UPDATER_EXTERNAL_CONSTANTS_DEFAULT_H_
