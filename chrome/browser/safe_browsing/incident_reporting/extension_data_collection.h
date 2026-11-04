// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extension data collection header
// summary: Declares CollectExtensionData, which populates an incident report with information about the last installed extension.
// ---

#ifndef CHROME_BROWSER_SAFE_BROWSING_INCIDENT_REPORTING_EXTENSION_DATA_COLLECTION_H_
#define CHROME_BROWSER_SAFE_BROWSING_INCIDENT_REPORTING_EXTENSION_DATA_COLLECTION_H_

namespace safe_browsing {

class ClientIncidentReport_ExtensionData;

// Populates |data| with information about the last installed extension.
void CollectExtensionData(ClientIncidentReport_ExtensionData* data);

}  // namespace safe_browsing

#endif  // CHROME_BROWSER_SAFE_BROWSING_INCIDENT_REPORTING_EXTENSION_DATA_COLLECTION_H_
