// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Input on Viz state processing result enum
// summary: Defines the InputOnVizStateProcessingResult enum of histogram-persisted outcome values for processing input on Viz and declares a helper to emit the result histogram.
// ---

#ifndef COMPONENTS_VIZ_SERVICE_INPUT_INPUT_ON_VIZ_STATE_PROCESSING_RESULT_H_
#define COMPONENTS_VIZ_SERVICE_INPUT_INPUT_ON_VIZ_STATE_PROCESSING_RESULT_H_

namespace viz {

// These values are persisted to logs. Entries should not be renumbered and
// numeric values should never be reused.
enum class InputOnVizStateProcessingResult {
  kProcessedSuccessfully = 0,
  kCouldNotFindViewForFrameSinkId = 1,
  // Obsolete: kFrameSinkIdCorrespondsToChildView = 2,
  kFrameSinkIdNotAttachedToRootCFS = 3,
  kDroppedOutOfOrderDownTime = 4,
  kDroppedTooManyPendingStates = 5,
  kDroppedUnusedOlderStates = 6,
  kTransferBackToBrowserSuccessfully = 7,
  kDroppedTransferBackToBrowserFailed = 8,
  kSpeculativeTransferStateReplaced = 9,
  kMaxValue = kSpeculativeTransferStateReplaced,
};

void EmitStateProcessingResultHistogram(InputOnVizStateProcessingResult result);

}  // namespace viz

#endif  // COMPONENTS_VIZ_SERVICE_INPUT_INPUT_ON_VIZ_STATE_PROCESSING_RESULT_H_
