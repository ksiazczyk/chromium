// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bidirectional stream impl base definitions
// summary: Provides default constructor and destructor definitions for BidirectionalStreamImpl and its nested Delegate class.
// ---

#include "net/http/bidirectional_stream_impl.h"

namespace net {

BidirectionalStreamImpl::Delegate::Delegate() = default;

BidirectionalStreamImpl::Delegate::~Delegate() = default;

BidirectionalStreamImpl::BidirectionalStreamImpl() = default;

BidirectionalStreamImpl::~BidirectionalStreamImpl() = default;

}  // namespace net
