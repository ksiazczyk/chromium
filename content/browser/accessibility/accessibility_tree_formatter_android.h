// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android accessibility tree formatter header
// summary: Declares the Android accessibility tree formatter class that serializes the platform accessibility tree for inspection.
// ---

#ifndef CONTENT_BROWSER_ACCESSIBILITY_ACCESSIBILITY_TREE_FORMATTER_ANDROID_H_
#define CONTENT_BROWSER_ACCESSIBILITY_ACCESSIBILITY_TREE_FORMATTER_ANDROID_H_

#include "content/common/content_export.h"
#include "ui/accessibility/platform/inspect/ax_tree_formatter_base.h"

namespace content {

class CONTENT_EXPORT AccessibilityTreeFormatterAndroid
    : public ui::AXTreeFormatterBase {
 public:
  AccessibilityTreeFormatterAndroid();
  ~AccessibilityTreeFormatterAndroid() override;

  base::DictValue BuildTree(ui::AXPlatformNodeDelegate* root) const override;
  base::DictValue BuildTreeForSelector(
      const AXTreeSelector& selector) const override;

  base::DictValue BuildNode(ui::AXPlatformNodeDelegate* node) const override;

 protected:
  void AddDefaultFilters(
      std::vector<AXPropertyFilter>* property_filters) override;

 private:
  void RecursiveBuildTree(const ui::AXPlatformNodeDelegate& node,
                          base::DictValue* dict) const;

  void SetIfHasValue(base::DictValue* dict,
                     std::string key,
                     std::optional<int> value) const;

  void SetIfNonZero(base::DictValue* dict, std::string key, int value) const;

  void AddProperties(const ui::AXPlatformNodeDelegate& node,
                     base::DictValue* dict) const;

  std::string ProcessTreeForOutput(const base::DictValue& node) const override;
};

}  // namespace content

#endif  // CONTENT_BROWSER_ACCESSIBILITY_ACCESSIBILITY_TREE_FORMATTER_ANDROID_H_
