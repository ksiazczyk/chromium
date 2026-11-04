// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enterprise networking attributes API header
// summary: Declares the GetNetworkDetails extension function class for the enterprise.networkingAttributes API.
// ---

#ifndef CHROME_BROWSER_EXTENSIONS_API_ENTERPRISE_NETWORKING_ATTRIBUTES_ENTERPRISE_NETWORKING_ATTRIBUTES_API_H_
#define CHROME_BROWSER_EXTENSIONS_API_ENTERPRISE_NETWORKING_ATTRIBUTES_ENTERPRISE_NETWORKING_ATTRIBUTES_API_H_

#include "extensions/browser/extension_function.h"
#include "extensions/browser/extension_function_histogram_value.h"

namespace extensions {

class EnterpriseNetworkingAttributesGetNetworkDetailsFunction
    : public ExtensionFunction {
 public:
  EnterpriseNetworkingAttributesGetNetworkDetailsFunction();

 protected:
  ~EnterpriseNetworkingAttributesGetNetworkDetailsFunction() override;

  ResponseAction Run() override;

 private:
  DECLARE_EXTENSION_FUNCTION(
      "enterprise.networkingAttributes.getNetworkDetails",
      ENTERPRISE_NETWORKINGATTRIBUTES_GETNETWORKDETAILS)
};

}  //  namespace extensions

#endif  // CHROME_BROWSER_EXTENSIONS_API_ENTERPRISE_NETWORKING_ATTRIBUTES_ENTERPRISE_NETWORKING_ATTRIBUTES_API_H_
