// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Incident report uploader base implementation
// summary: Implements the IncidentReportUploader base class destructor and the constructor that stores the result callback.
// ---

#include "chrome/browser/safe_browsing/incident_reporting/incident_report_uploader.h"

namespace safe_browsing {

IncidentReportUploader::~IncidentReportUploader() = default;

IncidentReportUploader::IncidentReportUploader(OnResultCallback callback)
    : callback_(std::move(callback)) {}

}  // namespace safe_browsing
