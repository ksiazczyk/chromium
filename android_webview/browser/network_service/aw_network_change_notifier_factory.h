// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwNetworkChangeNotifierFactory class declaration
// summary: Declares the factory that creates WebView's specialized NetworkChangeNotifier using an Android delegate.
// relations:
//   - depends_on /net/android/network_change_notifier_delegate_android.h
//   - implements /net/base/network_change_notifier_factory.h
//   - references /android_webview/browser/network_service/aw_network_change_notifier.h
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_NETWORK_SERVICE_AW_NETWORK_CHANGE_NOTIFIER_FACTORY_H_
#define ANDROID_WEBVIEW_BROWSER_NETWORK_SERVICE_AW_NETWORK_CHANGE_NOTIFIER_FACTORY_H_

#include <memory>

#include "net/android/network_change_notifier_delegate_android.h"
#include "net/base/network_change_notifier_factory.h"

namespace net {
class NetworkChangeNotifier;
}

namespace android_webview {

// AwNetworkChangeNotifierFactory creates WebView-specific specialization of
// NetworkChangeNotifier. See aw_network_change_notifier.h for more details.
class AwNetworkChangeNotifierFactory :
    public net::NetworkChangeNotifierFactory {
 public:
  // Must be called on the JNI thread.
  AwNetworkChangeNotifierFactory();

  AwNetworkChangeNotifierFactory(const AwNetworkChangeNotifierFactory&) =
      delete;
  AwNetworkChangeNotifierFactory& operator=(
      const AwNetworkChangeNotifierFactory&) = delete;

  // Must be called on the JNI thread.
  ~AwNetworkChangeNotifierFactory() override;

  // NetworkChangeNotifierFactory:
  std::unique_ptr<net::NetworkChangeNotifier> CreateInstanceWithInitialTypes(
      net::NetworkChangeNotifier::ConnectionType /*initial_type*/,
      net::NetworkChangeNotifier::ConnectionSubtype /*initial_subtype*/)
      override;

 private:
  // Delegate passed to the instances created by this class.
  net::NetworkChangeNotifierDelegateAndroid delegate_;
};

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_NETWORK_SERVICE_AW_NETWORK_CHANGE_NOTIFIER_FACTORY_H_
