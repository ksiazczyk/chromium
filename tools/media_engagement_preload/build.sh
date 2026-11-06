# Copyright 2017 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: script
# title: Generate protobuf Python bindings
# summary: Shell script that runs protoc to generate Python code for the media engagement preload proto.
# ---

protoc --python_out . \
  ../../chrome/browser/media/media_engagement_preload.proto \
  --proto_path ../../chrome/browser/media
