// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Push messaging unsubscribed entry header
// summary: Declares PushMessagingUnsubscribedEntry, which identifies and persists Service Worker registrations unsubscribed from the Push API.
// ---

#ifndef CHROME_BROWSER_PUSH_MESSAGING_PUSH_MESSAGING_UNSUBSCRIBED_ENTRY_H_
#define CHROME_BROWSER_PUSH_MESSAGING_PUSH_MESSAGING_UNSUBSCRIBED_ENTRY_H_

#include <stdint.h>

#include <vector>

#include "url/gurl.h"

class Profile;

namespace user_prefs {
class PrefRegistrySyncable;
}

// Type used to identify a Service Worker registration that has been
// unsubscribed from a Push API
// perspective. These can be persisted to prefs.
class PushMessagingUnsubscribedEntry {
 public:
  // Register profile-specific prefs.
  static void RegisterProfilePrefs(user_prefs::PrefRegistrySyncable* registry);

  static std::vector<PushMessagingUnsubscribedEntry> GetAll(Profile* profile);
  static void DeleteAllFromPrefs(Profile* profile);

  // Constructs a valid unsubscribed entry.
  PushMessagingUnsubscribedEntry(GURL origin,
                                 int64_t service_worker_registration_id);

  void PersistToPrefs(Profile* profile) const;
  void DeleteFromPrefs(Profile* profile) const;

  GURL origin() const { return origin_; }
  int64_t service_worker_registration_id() const {
    return service_worker_registration_id_;
  }

 private:
  void DCheckValid() const;

  GURL origin_;
  int64_t service_worker_registration_id_;
};

#endif  // CHROME_BROWSER_PUSH_MESSAGING_PUSH_MESSAGING_UNSUBSCRIBED_ENTRY_H_
