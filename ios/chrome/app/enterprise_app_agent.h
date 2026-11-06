// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enterprise app agent header
// summary: Declares EnterpriseAppAgent, an app state agent that blocks initialization while enterprise policy data is loaded.
// ---

#ifndef IOS_CHROME_APP_ENTERPRISE_APP_AGENT_H_
#define IOS_CHROME_APP_ENTERPRISE_APP_AGENT_H_

#import "ios/chrome/app/application_delegate/observing_app_state_agent.h"

// App state agent that blocks the app initialization while the
// device enterprise-related data is loaded.
@interface EnterpriseAppAgent : SceneObservingAppAgent

@end

#endif  // IOS_CHROME_APP_ENTERPRISE_APP_AGENT_H_
