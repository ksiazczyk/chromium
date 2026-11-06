// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeDriver utility for JSON serialization
// summary: Implements SerializeAsJson overloads that write base values, dictionaries, and strings as JSON, returning a Status error on failure.
// ---

#include "chrome/test/chromedriver/chrome/util.h"

#include "base/json/json_writer.h"

namespace {

template <class T>
Status SerializeAsJsonT(const T& value, std::string* json) {
  if (!base::JSONWriter::Write(value, json)) {
    return Status(kUnknownError, "cannot serialize the argument as JSON");
  }
  return Status{kOk};
}

}  // namespace

Status SerializeAsJson(const base::DictValue& value, std::string* json) {
  return SerializeAsJsonT(value, json);
}

Status SerializeAsJson(const base::Value& value, std::string* json) {
  return SerializeAsJsonT(value, json);
}

Status SerializeAsJson(const std::string& value, std::string* json) {
  return SerializeAsJsonT(value, json);
}
