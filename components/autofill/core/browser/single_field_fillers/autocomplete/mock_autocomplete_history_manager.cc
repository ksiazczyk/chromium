// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock autocomplete history manager implementation
// summary: Implements the mock autocomplete history manager that forwards to the real constructor so tests can stub its methods.
// ---

#include "components/autofill/core/browser/single_field_fillers/autocomplete/mock_autocomplete_history_manager.h"

#include "components/autofill/core/browser/single_field_fillers/autocomplete/autocomplete_history_manager.h"

namespace autofill {

MockAutocompleteHistoryManager::MockAutocompleteHistoryManager()
    : AutocompleteHistoryManager(/*profile_database=*/nullptr,
                                 /*pref_service=*/nullptr) {}

MockAutocompleteHistoryManager::MockAutocompleteHistoryManager(
    scoped_refptr<AutofillWebDataService> profile_database,
    PrefService* pref_service)
    : AutocompleteHistoryManager(profile_database, pref_service) {}

MockAutocompleteHistoryManager::~MockAutocompleteHistoryManager() = default;

}  // namespace autofill
