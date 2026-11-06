// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: data
// title: Sample annotation call with too few arguments
// summary: Sample C++ file calling DefineNetworkTrafficAnnotation with too few arguments to test error reporting.
// ---

#include "net/traffic_annotation/network_traffic_annotation.h"

net::NetworkTrafficAnnotationTag kTrafficAnnotation =
    net::DefineNetworkTrafficAnnotation("id1");
