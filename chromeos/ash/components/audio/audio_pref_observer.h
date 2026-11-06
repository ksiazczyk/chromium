// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Audio preference observer interface
// summary: Observer interface notified when audio policy and voice isolation preferences change.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_AUDIO_AUDIO_PREF_OBSERVER_H_
#define CHROMEOS_ASH_COMPONENTS_AUDIO_AUDIO_PREF_OBSERVER_H_

#include "base/component_export.h"

namespace ash {

// Interface for observing audio preference changes.
class COMPONENT_EXPORT(CHROMEOS_ASH_COMPONENTS_AUDIO) AudioPrefObserver
    : public base::CheckedObserver {
 public:
  // Called when audio policy prefs changed.
  virtual void OnAudioPolicyPrefChanged() = 0;

  // Called when voice isolation prefs changed.
  virtual void OnVoiceIsolationPrefChanged() = 0;

 protected:
  ~AudioPrefObserver() override = default;
};

}  // namespace ash

#endif  // CHROMEOS_ASH_COMPONENTS_AUDIO_AUDIO_PREF_OBSERVER_H_
