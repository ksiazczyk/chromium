// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: URL protobuf to string converter header
// summary: Declares the url_proto::Convert() function that turns a Url protobuf message into a URL string for fuzzing targets that do not accept protobuf input.
// ---

#ifndef TESTING_LIBFUZZER_PROTO_URL_PROTO_CONVERTER_H_
#define TESTING_LIBFUZZER_PROTO_URL_PROTO_CONVERTER_H_

#include "testing/libfuzzer/proto/url.pb.h"

namespace url_proto {

// Converts a URL in Protocol Buffer format to a url in string format.
// Since protobuf is a relatively simple format, fuzzing targets that do not
// accept protobufs (such as this one) will require code to convert from
// protobuf to the accepted format (string in this case).
std::string Convert(const url_proto::Url& url);

}  // namespace url_proto

#endif  // TESTING_LIBFUZZER_PROTO_URL_PROTO_CONVERTER_H_
