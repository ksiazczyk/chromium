// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NavigationURLLoaderDelegate EarlyHints definitions
// summary: Defines constructors, destructors, and move operators for the delegate's EarlyHints struct conveying Early Hints response information.
// ---

#include "content/browser/loader/navigation_url_loader_delegate.h"

#include "content/browser/loader/navigation_early_hints_manager.h"

namespace content {

NavigationURLLoaderDelegate::EarlyHints::EarlyHints() = default;

NavigationURLLoaderDelegate::EarlyHints::~EarlyHints() = default;

NavigationURLLoaderDelegate::EarlyHints::EarlyHints(
    NavigationURLLoaderDelegate::EarlyHints&& other) = default;

NavigationURLLoaderDelegate::EarlyHints&
NavigationURLLoaderDelegate::EarlyHints::operator=(
    NavigationURLLoaderDelegate::EarlyHints&& other) = default;

}  // namespace content
