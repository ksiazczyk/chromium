// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebHID chooser closure histogram recording
// summary: Records the Permissions.WebHid.ChooserClosed histogram describing how the WebHID device chooser was closed.
// ---

#include "chrome/browser/hid/web_hid_histograms.h"

#include "base/metrics/histogram_functions.h"

void RecordWebHidChooserClosure(WebHidChooserClosed disposition) {
  base::UmaHistogramEnumeration("Permissions.WebHid.ChooserClosed",
                                disposition);
}
