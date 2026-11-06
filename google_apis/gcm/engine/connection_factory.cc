// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Connection factory base implementation
// summary: Implements the ConnectionFactory base class and its ConnectionListener, defining only their constructors and destructors.
// ---

#include "google_apis/gcm/engine/connection_factory.h"

namespace gcm {

ConnectionFactory::ConnectionListener::ConnectionListener() {}
ConnectionFactory::ConnectionListener::~ConnectionListener() {}

ConnectionFactory::ConnectionFactory() {}
ConnectionFactory::~ConnectionFactory() {}

}  // namespace gcm
