// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Annotator marker color metrics implementation
// summary: Implements UMA histogram recording for annotator marker colors, appending a tablet or clamshell mode suffix to the histogram name.
// relations:
//   - implements /ash/annotator/annotator_metrics.h
//   - depends_on /ash/shell.h
//   - depends_on /base/metrics/histogram_functions.h
// ---

#include "ash/annotator/annotator_metrics.h"

#include "ash/shell.h"
#include "base/metrics/histogram_functions.h"

namespace ash {

namespace {

constexpr char kAnnotatorMarkerColorHistogramName[] =
    "Ash.Projector.MarkerColor";

// Appends the proper suffix to |prefix| based on whether the user is in tablet
// mode or not.
std::string GetHistogramName(const std::string& prefix) {
  std::string mode =
      display::Screen::Get()->InTabletMode() ? ".TabletMode" : ".ClamshellMode";
  return prefix + mode;
}

}  // namespace

void RecordMarkerColorMetrics(AnnotatorMarkerColor color) {
  base::UmaHistogramEnumeration(
      GetHistogramName(kAnnotatorMarkerColorHistogramName), color);
}

}  // namespace ash
