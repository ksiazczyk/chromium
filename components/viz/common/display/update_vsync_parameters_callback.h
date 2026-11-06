// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VSync parameters update callback type
// summary: Defines the UpdateVSyncParametersCallback type alias for callbacks that receive a vsync timebase and interval.
// ---

#ifndef COMPONENTS_VIZ_COMMON_DISPLAY_UPDATE_VSYNC_PARAMETERS_CALLBACK_H_
#define COMPONENTS_VIZ_COMMON_DISPLAY_UPDATE_VSYNC_PARAMETERS_CALLBACK_H_

#include "base/functional/callback.h"
#include "base/time/time.h"

namespace viz {

using UpdateVSyncParametersCallback =
    base::RepeatingCallback<void(base::TimeTicks timebase,
                                 base::TimeDelta interval)>;

}  // namespace viz

#endif  // COMPONENTS_VIZ_COMMON_DISPLAY_UPDATE_VSYNC_PARAMETERS_CALLBACK_H_
