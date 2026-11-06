// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Hit test subscription data implementation
// summary: Implements HitTestSubscriptionData and TransientInputHitTestSubscriptionData, which hold native origin, entity types, ray, and profile name data for XR hit tests.
// ---

#include "device/vr/hit_test_subscription_data.h"

namespace device {

HitTestSubscriptionData::HitTestSubscriptionData(
    mojom::XRNativeOriginInformationPtr native_origin_information,
    const std::vector<mojom::EntityTypeForHitTest>& entity_types,
    mojom::XRRayPtr ray)
    : native_origin_information(std::move(native_origin_information)),
      entity_types(entity_types),
      ray(std::move(ray)) {}

HitTestSubscriptionData::HitTestSubscriptionData(
    HitTestSubscriptionData&& other) = default;
HitTestSubscriptionData::~HitTestSubscriptionData() = default;

TransientInputHitTestSubscriptionData::TransientInputHitTestSubscriptionData(
    const std::string& profile_name,
    const std::vector<mojom::EntityTypeForHitTest>& entity_types,
    mojom::XRRayPtr ray)
    : profile_name(profile_name),
      entity_types(entity_types),
      ray(std::move(ray)) {}

TransientInputHitTestSubscriptionData::TransientInputHitTestSubscriptionData(
    TransientInputHitTestSubscriptionData&& other) = default;
TransientInputHitTestSubscriptionData::
    ~TransientInputHitTestSubscriptionData() = default;

}  // namespace device