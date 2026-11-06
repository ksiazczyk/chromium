// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebMessageHost interface for the browser side of a WebMessage channel
// summary: Defines the WebMessageHost interface with an OnPostMessage callback that receives WebMessage objects arriving from the renderer side of the channel.
// ---

#ifndef COMPONENTS_JS_INJECTION_BROWSER_WEB_MESSAGE_HOST_H_
#define COMPONENTS_JS_INJECTION_BROWSER_WEB_MESSAGE_HOST_H_

#include <memory>

namespace js_injection {

struct WebMessage;

// Represents the browser side of a WebMessage channel.
class WebMessageHost {
 public:
  virtual ~WebMessageHost() = default;

  virtual void OnPostMessage(std::unique_ptr<WebMessage> message) = 0;
};

}  // namespace js_injection

#endif  // COMPONENTS_JS_INJECTION_BROWSER_WEB_MESSAGE_HOST_H_
