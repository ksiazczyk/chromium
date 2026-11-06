// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MetricsHandler class header
// summary: Declares the chrome_pdf MetricsHandler class used to record UMA metrics for PDF documents, noting action metrics are handled separately.
// ---

#ifndef PDF_METRICS_HANDLER_H_
#define PDF_METRICS_HANDLER_H_

namespace chrome_pdf {

struct DocumentMetadata;

// Handles various UMA metrics. Note that action metrics are handled separately.
class MetricsHandler {
 public:
  MetricsHandler();
  MetricsHandler(const MetricsHandler& other) = delete;
  MetricsHandler& operator=(const MetricsHandler& other) = delete;
  ~MetricsHandler();

  void RecordAccessibilityIsDocTagged(bool is_tagged);
  void RecordDocumentMetrics(const DocumentMetadata& metadata);
  void RecordUrlSchemeIsFile(bool is_file);
};

}  // namespace chrome_pdf

#endif  // PDF_METRICS_HANDLER_H_
