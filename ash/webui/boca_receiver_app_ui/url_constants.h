// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Boca receiver URL constants
// summary: Defines the host name and the chrome and chrome-untrusted URL constants used by the Boca receiver WebUI.
// ---

#ifndef ASH_WEBUI_BOCA_RECEIVER_APP_UI_URL_CONSTANTS_H_
#define ASH_WEBUI_BOCA_RECEIVER_APP_UI_URL_CONSTANTS_H_

namespace ash {

inline constexpr char kBocaReceiverHost[] = "class-tools-remote-display";
inline constexpr char kChromeUntrustedBocaReceiverURL[] =
    "chrome-untrusted://class-tools-remote-display/";
inline constexpr char kChromeBocaReceiverURL[] =
    "chrome://class-tools-remote-display";

}  // namespace ash

#endif  // ASH_WEBUI_BOCA_RECEIVER_APP_UI_URL_CONSTANTS_H_
