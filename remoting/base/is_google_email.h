// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IsGoogleEmail declaration header
// summary: Declares the IsGoogleEmail function that reports whether an email address is a Google email.
// ---

#ifndef REMOTING_BASE_IS_GOOGLE_EMAIL_H_
#define REMOTING_BASE_IS_GOOGLE_EMAIL_H_

#include <string>

namespace remoting {

extern bool IsGoogleEmail(const std::string& email_address);

}  // namespace remoting

#endif  // REMOTING_BASE_IS_GOOGLE_EMAIL_H_
