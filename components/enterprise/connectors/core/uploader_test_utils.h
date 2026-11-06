// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Uploader test utilities header
// summary: Declares test helpers for extracting upload request bodies from connector data pipes and network resource request bodies.
// ---

#ifndef COMPONENTS_ENTERPRISE_CONNECTORS_CORE_UPLOADER_TEST_UTILS_H_
#define COMPONENTS_ENTERPRISE_CONNECTORS_CORE_UPLOADER_TEST_UTILS_H_

#include <string>

namespace network {
class ResourceRequestBody;
}  // namespace network

namespace enterprise_connectors {

class ConnectorDataPipeGetter;

std::string GetBodyFromFileOrPageRequest(
    ConnectorDataPipeGetter* data_pipe_getter);

std::string GetBodyFromResourceRequestBody(
    const network::ResourceRequestBody& request_body);

}  // namespace enterprise_connectors

#endif  // COMPONENTS_ENTERPRISE_CONNECTORS_CORE_UPLOADER_TEST_UTILS_H_
