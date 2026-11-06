// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Actor command-line switch declarations
// summary: Declares the actor command-line switch constants covering safety check bypasses, test tooling, journal logging, tracing, and sensitive sites.
// ---

#ifndef COMPONENTS_ACTOR_CORE_ACTOR_SWITCHES_H_
#define COMPONENTS_ACTOR_CORE_ACTOR_SWITCHES_H_

namespace actor::switches {

extern const char kDisableActorSafetyChecks[];
extern const char kAttemptFormFillingToolSkipsUI[];
extern const char kAttemptOtpFillingToolMockValueSkipsChecks[];
extern const char kEnableActorJournalVLog[];
extern const char kActorTracePath[];
extern const char kActorSensitiveSites[];

}  // namespace actor::switches

#endif  // COMPONENTS_ACTOR_CORE_ACTOR_SWITCHES_H_
