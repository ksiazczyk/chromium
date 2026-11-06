// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AutomationTreeCache module
// summary: Exports an AutomationTreeCache object that maps accessibility tree IDs to their automation root nodes.
// ---

const AutomationTreeCache = {
  idToAutomationRootNode: {},
};

exports.$set('AutomationTreeCache', AutomationTreeCache);
