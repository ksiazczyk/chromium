// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Actuation worklog mutator protocol
// summary: Declares the mutator protocol for user actions in the actuation worklog, such as stopping actuation and triggering intervention actions.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_ACTOR_UI_ACTUATION_WORKLOG_MUTATOR_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_ACTOR_UI_ACTUATION_WORKLOG_MUTATOR_H_

#import <Foundation/Foundation.h>

@class ActuationInterventionAction;

// Mutator protocol for user actions triggered within the actuation worklog.
@protocol ActuationWorklogMutator <NSObject>

// Requests stopping the active actuation task.
- (void)stopActuation;

// Called when the user triggers `action` on the active intervention UI.
- (void)didTriggerInterventionAction:(ActuationInterventionAction*)action;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_ACTOR_UI_ACTUATION_WORKLOG_MUTATOR_H_
