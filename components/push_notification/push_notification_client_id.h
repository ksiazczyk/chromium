// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Push notification client ID enum
// summary: Defines the ClientId enum and declares helpers to map client IDs to and from strings.
// ---

#ifndef COMPONENTS_PUSH_NOTIFICATION_PUSH_NOTIFICATION_CLIENT_ID_H_
#define COMPONENTS_PUSH_NOTIFICATION_PUSH_NOTIFICATION_CLIENT_ID_H_

#include <optional>
#include <string>

namespace push_notification {

enum class ClientId {
  kTest,
};

static constexpr char kTestClientId[] = "test";

std::optional<std::string> GetClientIdStr(ClientId id);
std::optional<ClientId> GetClientIdFromStr(const std::string& id_string);

}  // namespace push_notification

#endif  // COMPONENTS_PUSH_NOTIFICATION_PUSH_NOTIFICATION_CLIENT_ID_H_
