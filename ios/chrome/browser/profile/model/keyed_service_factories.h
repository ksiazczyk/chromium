// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Keyed service factory build declaration
// summary: Declares EnsureProfileKeyedServiceFactoriesBuilt, which registers all KeyedService factories with ProfileDependencyManagerIOS before ProfileIOS is created.
// ---

#ifndef IOS_CHROME_BROWSER_PROFILE_MODEL_KEYED_SERVICE_FACTORIES_H_
#define IOS_CHROME_BROWSER_PROFILE_MODEL_KEYED_SERVICE_FACTORIES_H_

// Instantiates all KeyedService factories ensuring they are registered with
// the ProfileDependencyManagerIOS before the the ProfileIOS is created (as
// required by the KeyedService infrastructure).
void EnsureProfileKeyedServiceFactoriesBuilt();

#endif  // IOS_CHROME_BROWSER_PROFILE_MODEL_KEYED_SERVICE_FACTORIES_H_
