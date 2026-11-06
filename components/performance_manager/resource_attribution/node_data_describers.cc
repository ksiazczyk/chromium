// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Result metadata describer implementation
// summary: Implements DescribeResultMetadata, converting resource attribution result metadata into a dictionary with the measurement algorithm name and measurement time.
// ---

#include "components/performance_manager/resource_attribution/node_data_describers.h"

#include <string>

#include "base/notreached.h"
#include "components/performance_manager/public/graph/node_data_describer_util.h"

namespace resource_attribution {

namespace {

std::string AlgorithmName(MeasurementAlgorithm algorithm) {
  switch (algorithm) {
    case MeasurementAlgorithm::kDirectMeasurement:
      return "DirectMeasurement";
    case MeasurementAlgorithm::kSplit:
      return "Split";
    case MeasurementAlgorithm::kSum:
      return "Sum";
  }
  NOTREACHED();
}

}  // namespace

base::DictValue DescribeResultMetadata(const ResultMetadata& metadata) {
  base::DictValue dict;
  dict.Set("algorithm", AlgorithmName(metadata.algorithm));
  dict.Set("measurement_time", performance_manager::TimeSinceEpochToValue(
                                   metadata.measurement_time));
  return dict;
}

}  // namespace resource_attribution
