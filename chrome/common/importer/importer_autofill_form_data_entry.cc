// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Importer autofill form data entry implementation
// summary: Implements the constructor and destructor of the ImporterAutofillFormDataEntry struct used when importing form history from other browsers.
// ---

#include "chrome/common/importer/importer_autofill_form_data_entry.h"

ImporterAutofillFormDataEntry::ImporterAutofillFormDataEntry() : times_used(0) {
}

ImporterAutofillFormDataEntry::~ImporterAutofillFormDataEntry() = default;
