// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Actor logging macro
// summary: Defines the ACTOR_LOG macro that prefixes actor framework log messages for use across the actor browser and renderer code.
// ---

#ifndef COMPONENTS_ACTOR_CORE_ACTOR_LOGGING_H_
#define COMPONENTS_ACTOR_CORE_ACTOR_LOGGING_H_

#include "base/logging.h"

// Logging utility for actor framework. See chrome/{browser|renderer}/actor for
// details.

#define ACTOR_LOG() VLOG(1) << "[ActorTool]: "

#endif  // COMPONENTS_ACTOR_CORE_ACTOR_LOGGING_H_
