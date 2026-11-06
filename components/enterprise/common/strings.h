// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enterprise connector URL parameter declarations
// summary: Declares extern constants for the URL parameters enterprise connectors use when calling service provider endpoints.
// ---

#ifndef COMPONENTS_ENTERPRISE_COMMON_STRINGS_H_
#define COMPONENTS_ENTERPRISE_COMMON_STRINGS_H_

namespace enterprise {

// URL parameters used when enterprise connectors call on service provider
// endpoints.
extern const char kUrlParamConnector[];
extern const char kUrlParamDeviceToken[];
extern const char kUrlParamTag[];

}  // namespace enterprise

#endif  // COMPONENTS_ENTERPRISE_COMMON_STRINGS_H_
