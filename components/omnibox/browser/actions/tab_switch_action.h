// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabSwitchAction omnibox action header
// summary: Declares the TabSwitchAction class, an OmniboxAction subclass that executes a switch to an existing tab for a given URL in the Chromium omnibox.
// ---

#ifndef COMPONENTS_OMNIBOX_BROWSER_ACTIONS_TAB_SWITCH_ACTION_H_
#define COMPONENTS_OMNIBOX_BROWSER_ACTIONS_TAB_SWITCH_ACTION_H_

#include "components/omnibox/browser/actions/omnibox_action.h"
#include "components/omnibox/browser/actions/omnibox_action_concepts.h"
#include "url/gurl.h"

namespace gfx {
struct VectorIcon;
}

class TabSwitchAction : public OmniboxAction {
 public:
  explicit TabSwitchAction(GURL url);

  void Execute(ExecutionContext& context) const override;

#if defined(SUPPORT_PEDALS_VECTOR_ICONS)
  const gfx::VectorIcon& GetVectorIcon() const override;
#endif

  OmniboxActionId ActionId() const override;

 protected:
  ~TabSwitchAction() override;
};

#endif  // COMPONENTS_OMNIBOX_BROWSER_ACTIONS_TAB_SWITCH_ACTION_H_
