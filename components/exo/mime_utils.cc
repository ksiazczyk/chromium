// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mime utils implementation
// summary: Implements GetCharset, which extracts the character set from a text MIME type, defaulting to US-ASCII and special-casing UTF-8 for X11 apps.
// ---

#include "components/exo/mime_utils.h"

#include "ui/base/clipboard/clipboard_constants.h"

namespace {

constexpr char kCharset[] = ";charset=";
constexpr char kDefaultCharset[] = "US-ASCII";
constexpr char kEncodingUTF8Charset[] = "UTF-8";

}  // namespace

namespace exo {

std::string GetCharset(const std::string& mime_type) {
  // We special case UTF-8 to provide minimal handling of X11 apps.
  if (mime_type == ui::kMimeTypeLinuxUtf8String)
    return std::string(kEncodingUTF8Charset);

  auto pos = mime_type.find(kCharset);
  if (pos == std::string::npos)
    return std::string(kDefaultCharset);
  return mime_type.substr(pos + sizeof(kCharset) - 1);
}

}  // namespace exo
