// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote support host struct implementation
// summary: Implements the default constructors, destructors and assignment operators for the RemoteSupportHostStruct used by the remote support service.
// ---

#include "remoting/proto/remote_support_service.h"

namespace remoting::internal {

RemoteSupportHostStruct::RemoteSupportHostStruct() = default;
RemoteSupportHostStruct::~RemoteSupportHostStruct() = default;
RemoteSupportHostStruct::RemoteSupportHostStruct(
    const RemoteSupportHostStruct&) = default;
RemoteSupportHostStruct::RemoteSupportHostStruct(RemoteSupportHostStruct&&) =
    default;
RemoteSupportHostStruct& RemoteSupportHostStruct::operator=(
    const RemoteSupportHostStruct&) = default;
RemoteSupportHostStruct& RemoteSupportHostStruct::operator=(
    RemoteSupportHostStruct&&) = default;

}  // namespace remoting::internal
