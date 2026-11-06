// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Commerce flag name and description strings
// summary: Defines the user-facing name and description strings for commerce feature flags such as shopping list, price insights and discount autofill.
// ---

#include "components/commerce/core/flag_descriptions.h"

namespace commerce::flag_descriptions {

const char kProductSpecificationsName[] = "Product Specifications";
const char kProductSpecificationsDescription[] =
    "Enable the Product Specifications feature.";

const char kShoppingListName[] = "Shopping List";
const char kShoppingListDescription[] = "Enable shopping list in bookmarks.";

const char kPriceInsightsName[] = "Price Insights";
const char kPriceInsightsDescription[] = "Enable price insights experiment.";

const char kDiscountOnNavigationName[] = "Discounts on navigation";
const char kDiscountOnNavigationDescription[] =
    "Enable to show available discounts on the page after navigation.";

const char kPriceTrackingSubscriptionServiceLocaleKeyName[] =
    "Price Tracking Subscription Service Local Key";
const char kPriceTrackingSubscriptionServiceLocaleKeyDescription[] =
    "Enable the locale key for price tracking subscription service";

const char kDiscountAutofillName[] = "Discount Autofill";
const char kDiscountAutofillDescription[] =
    "Enable discount autofill experiment.";

}  // namespace commerce::flag_descriptions
