// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Augments chrome.automation.RoleType with abstract types for
 * ChromeVox.
 */

// ---docerion
// type: source
// title: Abstract and custom ChromeVox role types
// summary: Extends chrome.automation.RoleType with abstract and custom role enums used by ChromeVox.
// ---

export enum AbstractRole {
  CONTAINER = 'abstractContainer',
  FORM_FIELD_CONTAINER = 'abstractFormFieldContainer',
  ITEM = 'abstractItem',
  LIST = 'abstractList',
  NAME_FROM_CONTENTS = 'abstractNameFromContents',
  RANGE = 'abstractRange',
  SPAN = 'abstractSpan',
}

export enum CustomRole {
  DEFAULT = 'default',
  NO_ROLE = 'noRole',
}

export type ChromeVoxRole = chrome.automation.RoleType|AbstractRole|CustomRole;
