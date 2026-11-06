// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autocomplete change observer header
// summary: Declares a test helper observing the autocomplete controller emitter so tests can wait until autocomplete results change.
// ---

#ifndef CHROME_TEST_BASE_AUTOCOMPLETE_CHANGE_OBSERVER_H_
#define CHROME_TEST_BASE_AUTOCOMPLETE_CHANGE_OBSERVER_H_

#include "base/run_loop.h"
#include "base/scoped_observation.h"
#include "components/omnibox/browser/autocomplete_controller.h"

class AutocompleteControllerEmitter;
class Profile;

class AutocompleteChangeObserver : public AutocompleteController::Observer {
 public:
  explicit AutocompleteChangeObserver(Profile* profile);
  AutocompleteChangeObserver(const AutocompleteChangeObserver&) = delete;
  AutocompleteChangeObserver& operator=(const AutocompleteChangeObserver&) =
      delete;
  ~AutocompleteChangeObserver() override;

  // Waits until a change is observed.
  void Wait();

  // AutocompleteController::Observer:
  void OnResultChanged(AutocompleteController* controller,
                       bool default_match_changed) override;

 private:
  base::RunLoop run_loop_;
  base::ScopedObservation<AutocompleteControllerEmitter,
                          AutocompleteController::Observer>
      scoped_observation_{this};
};

#endif  // CHROME_TEST_BASE_AUTOCOMPLETE_CHANGE_OBSERVER_H_
