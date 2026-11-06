// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SignalsFilterer implementation
// summary: Provides the default no-op implementation of SignalsFilterer::Filter, leaving the signal payload unchanged.
// ---

#include "components/enterprise/device_trust/core/signals/signals_filterer.h"

namespace enterprise_connectors {

void SignalsFilterer::Filter(base::DictValue& signals) {}

}  // namespace enterprise_connectors
