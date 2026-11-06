// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: D-Bus Error class implementation
// summary: Implements constructors and move semantics for the Error class that carries D-Bus error information.
// ---

#include "dbus/error.h"

#include <utility>

namespace dbus {

Error::Error() = default;

Error::Error(std::string name, std::string message)
    : name_(std::move(name)), message_(std::move(message)) {}

Error::Error(Error&& other) = default;

Error& Error::operator=(Error&& other) = default;

Error::~Error() = default;

}  // namespace dbus
