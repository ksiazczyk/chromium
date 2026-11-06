// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default CastWebUI Create factory
// summary: Provides the default CastWebUI::Create implementation that instantiates a plain CastWebUI controller.
// ---

#include "chromecast/browser/webui/cast_webui.h"

namespace chromecast {

// static
std::unique_ptr<CastWebUI> CastWebUI::Create(content::WebUI* webui,
                                             const std::string& host,
                                             mojom::WebUiClient* client) {
  return std::make_unique<CastWebUI>(webui, host, client);
}

}  // namespace chromecast
