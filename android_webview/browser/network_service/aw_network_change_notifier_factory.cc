// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwNetworkChangeNotifierFactory implementation
// summary: Creates AwNetworkChangeNotifier instances for WebView, ignoring the initial connection types passed by the factory interface.
// relations:
//   - implements /android_webview/browser/network_service/aw_network_change_notifier_factory.h
//   - depends_on /android_webview/browser/network_service/aw_network_change_notifier.h
//   - depends_on /base/memory/ptr_util.h
// ---

#include "android_webview/browser/network_service/aw_network_change_notifier_factory.h"

#include "android_webview/browser/network_service/aw_network_change_notifier.h"
#include "base/memory/ptr_util.h"

namespace android_webview {

AwNetworkChangeNotifierFactory::AwNetworkChangeNotifierFactory() = default;

AwNetworkChangeNotifierFactory::~AwNetworkChangeNotifierFactory() = default;

std::unique_ptr<net::NetworkChangeNotifier>
AwNetworkChangeNotifierFactory::CreateInstanceWithInitialTypes(
    net::NetworkChangeNotifier::ConnectionType /*initial_type*/,
    net::NetworkChangeNotifier::ConnectionSubtype /*initial_subtype*/) {
  return base::WrapUnique(new AwNetworkChangeNotifier(&delegate_));
}

}  // namespace android_webview
