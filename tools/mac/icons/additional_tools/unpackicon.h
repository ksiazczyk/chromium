// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring UnpackIcon
// summary: Declares the UnpackIcon function used by unmakeicns to decompress RLE icon data.
// ---

#ifndef UNPACKICON_H_
#define UNPACKICON_H_

bool UnpackIcon(const char* input_path, const char* output_path, bool skip);

#endif  // UNPACKICON_H_
