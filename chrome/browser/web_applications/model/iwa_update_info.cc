// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IwaUpdateInfo implementation
// summary: Implements constructors and copy/move semantics for the IwaUpdateInfo struct that carries an update manifest URL and optional update channel.
// ---

#include "chrome/browser/web_applications/model/iwa_update_info.h"

namespace web_app {

IwaUpdateInfo::IwaUpdateInfo(GURL update_manifest_url,
                             std::optional<UpdateChannel> update_channel)
    : update_manifest_url(std::move(update_manifest_url)),
      update_channel(std::move(update_channel)) {}

IwaUpdateInfo::~IwaUpdateInfo() = default;
IwaUpdateInfo::IwaUpdateInfo(const IwaUpdateInfo&) = default;
IwaUpdateInfo& IwaUpdateInfo::operator=(const IwaUpdateInfo&) = default;
IwaUpdateInfo::IwaUpdateInfo(IwaUpdateInfo&&) = default;
IwaUpdateInfo& IwaUpdateInfo::operator=(IwaUpdateInfo&&) = default;

}  // namespace web_app
