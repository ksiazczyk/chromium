// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CWVAutofill preferences header
// summary: Declares autofill preference keys and functions to register, migrate, and toggle settings such as address sync, VCN usage, and scoped form activity.
// ---

#ifndef IOS_WEB_VIEW_INTERNAL_AUTOFILL_CWV_AUTOFILL_PREFS_H_
#define IOS_WEB_VIEW_INTERNAL_AUTOFILL_CWV_AUTOFILL_PREFS_H_

class PrefRegistrySimple;
class PrefService;

namespace ios_web_view {

inline constexpr char kCWVAutofillAddressSyncEnabled[] =
    "cwv.autofill.address_sync_enabled";

inline constexpr char kCWVAutofillVCNUsageEnabled[] =
    "cwv.autofill.vcn_usage_enabled";

inline constexpr char kCWVAutofillScopedFormActivityEnabled[] =
    "cwv.autofill.scoped_form_activity_enabled";

// Registers the CWVAutofill preferences for this `pref_registry`.
void RegisterCWVAutofillPrefs(PrefRegistrySimple* pref_registry);

// Clears persisted values of obsolete CWVAutofill preferences from `prefs`.
void MigrateObsoleteCWVAutofillPrefs(PrefService* prefs);

void SetAutofillAddressSyncEnabled(PrefService* prefs, bool value);

bool IsAutofillAddressSyncEnabled(const PrefService* prefs);

void SetAutofillVCNUsageEnabled(PrefService* prefs, bool value);

bool IsAutofillVCNUsageEnabled(const PrefService* prefs);

void SetAutofillScopedFormActivityEnabled(PrefService* prefs, bool value);

bool IsAutofillScopedFormActivityEnabled(const PrefService* prefs);

void SetUseImageFetcherEnabled(PrefService* prefs, bool value);

bool IsUseImageFetcherEnabled(const PrefService* prefs);

void SetUseCardCustomImageEnabled(PrefService* prefs, bool value);

bool IsUseCardCustomImagerEnabled(const PrefService* prefs);

}  // namespace ios_web_view

#endif  // IOS_WEB_VIEW_INTERNAL_AUTOFILL_CWV_AUTOFILL_PREFS_H_
