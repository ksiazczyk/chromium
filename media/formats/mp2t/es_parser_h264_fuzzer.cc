// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: H264 ES parser fuzzer
// summary: LibFuzzer entry point that feeds arbitrary input data to the MPEG-2 TS H.264 elementary stream parser to uncover crashes.
// ---

#include "media/formats/mp2t/es_parser_h264.h"

#include <stddef.h>
#include <stdint.h>

#include "base/containers/span.h"
#include "base/functional/bind.h"
#include "media/base/stream_parser_buffer.h"
#include "testing/libfuzzer/libfuzzer_base_wrappers.h"

static void NewVideoConfig(const media::VideoDecoderConfig& config) {}
static void EmitBuffer(scoped_refptr<media::StreamParserBuffer> buffer) {}

// Entry point for LibFuzzer.
DEFINE_LLVM_FUZZER_TEST_ONE_INPUT_SPAN(const base::span<const uint8_t> data) {
  media::mp2t::EsParserH264 es_parser(base::BindRepeating(&NewVideoConfig),
                                      base::BindRepeating(&EmitBuffer));
  if (!es_parser.Parse(data, media::kNoTimestamp, media::kNoDecodeTimestamp)) {
    return 0;
  }
  return 0;
}
