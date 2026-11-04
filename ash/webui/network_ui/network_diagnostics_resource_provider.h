// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Network diagnostics resource provider header
// summary: Declares AddResources, which supplies the strings and resource paths needed for network diagnostics elements to a WebUI data source.
// ---

#ifndef ASH_WEBUI_NETWORK_UI_NETWORK_DIAGNOSTICS_RESOURCE_PROVIDER_H_
#define ASH_WEBUI_NETWORK_UI_NETWORK_DIAGNOSTICS_RESOURCE_PROVIDER_H_

namespace content {
class WebUIDataSource;
}  // namespace content

namespace ash {
namespace network_diagnostics {

// Adds the strings and resource paths needed for network diagnostics elements
// to |html_source|.
void AddResources(content::WebUIDataSource* html_source);

}  // namespace network_diagnostics
}  // namespace ash

#endif  // ASH_WEBUI_NETWORK_UI_NETWORK_DIAGNOSTICS_RESOURCE_PROVIDER_H_
