// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Buffer sink implementation
// summary: Implements BufferSink, a thin output buffer wrapper derived from MutableBufferView used when writing data.
// ---

#include "components/zucchini/buffer_sink.h"

namespace zucchini {

BufferSink::BufferSink(MutableBufferView buffer) : MutableBufferView(buffer) {}

}  // namespace zucchini
