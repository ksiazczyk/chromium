// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: wrong_arg_type.cc
// summary: C++ sample using a non-string-literal annotation ID to test the extractor's error handling for wrong argument types.
// ---

#include "net/traffic_annotation/network_traffic_annotation.h"

net::NetworkTrafficAnnotationTag kTrafficAnnotation =
    net::DefineNetworkTrafficAnnotation(
        should_be_a_string_literal_and_has_a_long_name,
        "XXX");
