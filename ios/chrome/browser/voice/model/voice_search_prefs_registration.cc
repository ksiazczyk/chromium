// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Voice search preference registration
// summary: Registers the voice search locale string pref as syncable and the TTS boolean pref with the browser state pref registry.
// ---

#include "ios/chrome/browser/voice/model/voice_search_prefs_registration.h"

#include "components/pref_registry/pref_registry_syncable.h"
#include "components/prefs/pref_service.h"
#include "ios/chrome/browser/voice/model/voice_search_prefs.h"

void RegisterVoiceSearchBrowserStatePrefs(
    user_prefs::PrefRegistrySyncable* registry) {
  registry->RegisterStringPref(prefs::kVoiceSearchLocale, std::string(),
                               user_prefs::PrefRegistrySyncable::SYNCABLE_PREF);
  registry->RegisterBooleanPref(prefs::kVoiceSearchTTS, true);
}
