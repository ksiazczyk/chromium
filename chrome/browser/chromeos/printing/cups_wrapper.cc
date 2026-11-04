// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CupsWrapper base class definitions
// summary: Defines the CupsWrapper destructor and QueryResult lifecycle in the chromeos namespace.
// ---

#include "chrome/browser/chromeos/printing/cups_wrapper.h"

namespace chromeos {

CupsWrapper::QueryResult::QueryResult() = default;

CupsWrapper::QueryResult::~QueryResult() = default;

CupsWrapper::~CupsWrapper() = default;

}  // namespace chromeos
