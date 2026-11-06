// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HTTP auth scheme name constants
// summary: Defines inline constants for HTTP authentication scheme names such as basic, digest, ntlm, negotiate, spdyproxy, and mock.
// ---

#ifndef NET_HTTP_HTTP_AUTH_SCHEME_H_
#define NET_HTTP_HTTP_AUTH_SCHEME_H_

namespace net {
inline constexpr char kBasicAuthScheme[] = "basic";
inline constexpr char kDigestAuthScheme[] = "digest";
inline constexpr char kNtlmAuthScheme[] = "ntlm";
inline constexpr char kNegotiateAuthScheme[] = "negotiate";
inline constexpr char kSpdyProxyAuthScheme[] = "spdyproxy";
inline constexpr char kMockAuthScheme[] = "mock";
}  // namespace net

#endif  // NET_HTTP_HTTP_AUTH_SCHEME_H_
