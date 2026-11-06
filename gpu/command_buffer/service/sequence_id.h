// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SequenceId type definition
// summary: Defines SequenceId as a 32-bit identifier type associated with sync point order data in the GPU command buffer service.
// ---

#ifndef GPU_COMMAND_BUFFER_SERVICE_SEQUENCE_ID_H_
#define GPU_COMMAND_BUFFER_SERVICE_SEQUENCE_ID_H_

#include "base/types/id_type.h"

namespace gpu {

class SyncPointOrderData;
using SequenceId = base::IdTypeU32<SyncPointOrderData>;

}  // namespace gpu

#endif  // GPU_COMMAND_BUFFER_SERVICE_SEQUENCE_ID_H_
