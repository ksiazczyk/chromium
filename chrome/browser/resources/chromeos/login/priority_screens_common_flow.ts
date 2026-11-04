// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Priority screens common flow screen list
// summary: Defines the screen list for the common priority onboarding flow, currently containing only the user creation screen.
// ---

import './screens/common/user_creation.js';

import type {OobeTypes} from './components/oobe_types.js';

export const priorityCommonScreenList: OobeTypes.ScreensList =
    [{tag: 'user-creation-element', id: 'user-creation'}];
