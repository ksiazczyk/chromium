// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Instant messaging API constants
// summary: Defines the Instant Messaging API endpoint URLs and the OAuth2 authorization header format used by nearby sharing.
// ---

#ifndef CHROME_BROWSER_NEARBY_SHARING_INSTANTMESSAGING_CONSTANTS_H_
#define CHROME_BROWSER_NEARBY_SHARING_INSTANTMESSAGING_CONSTANTS_H_

inline constexpr char kInstantMessagingReceiveMessageAPI[] =
    "https://instantmessaging-pa.googleapis.com/v1/messages:receiveExpress";

inline constexpr char kInstantMessagingSendMessageAPI[] =
    "https://instantmessaging-pa.googleapis.com/v1/message:sendExpress";

// Template for optional OAuth2 authorization HTTP header.
inline constexpr char kAuthorizationHeaderFormat[] = "Authorization: Bearer %s";

#endif  // CHROME_BROWSER_NEARBY_SHARING_INSTANTMESSAGING_CONSTANTS_H_
