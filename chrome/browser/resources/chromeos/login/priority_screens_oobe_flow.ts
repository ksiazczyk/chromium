// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Priority screens OOBE flow screen list
// summary: Defines the screen list for the OOBE priority onboarding flow, currently containing the welcome/connect screen.
// ---

import './screens/oobe/welcome.js';

import type {OobeTypes} from './components/oobe_types.js';

export const priorityOobeScreenList: OobeTypes.ScreensList = [
  {tag: 'oobe-welcome-element', id: 'connect'},
];
