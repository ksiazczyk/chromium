// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Connection to session map type alias
// summary: Defines a type alias mapping connection IDs to session ID strings.
// ---

#ifndef CHROME_TEST_CHROMEDRIVER_CONNECTION_SESSION_MAP_H_
#define CHROME_TEST_CHROMEDRIVER_CONNECTION_SESSION_MAP_H_

#include <string>
#include <unordered_map>

using ConnectionSessionMap = std::unordered_map<int, std::string>;

#endif  // CHROME_TEST_CHROMEDRIVER_CONNECTION_SESSION_MAP_H_
