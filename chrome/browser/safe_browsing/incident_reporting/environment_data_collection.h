// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Environment data collection header
// summary: Declares CollectEnvironmentData, which populates an incident report with information about the Chrome process and the environment it runs in.
// ---

#ifndef CHROME_BROWSER_SAFE_BROWSING_INCIDENT_REPORTING_ENVIRONMENT_DATA_COLLECTION_H_
#define CHROME_BROWSER_SAFE_BROWSING_INCIDENT_REPORTING_ENVIRONMENT_DATA_COLLECTION_H_

namespace safe_browsing {

class ClientIncidentReport_EnvironmentData;

// Populates |data| with information about the chrome process and the
// environment in which it is running.
void CollectEnvironmentData(ClientIncidentReport_EnvironmentData* data);

}  // namespace safe_browsing

#endif  // CHROME_BROWSER_SAFE_BROWSING_INCIDENT_REPORTING_ENVIRONMENT_DATA_COLLECTION_H_
