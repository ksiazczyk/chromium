// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DumpstateWriter JNI wrapper header
// summary: Declares the DumpstateWriter class, a JNI wrapper for DumpstateWriter.java that exposes a static AddDumpValue method.
// ---

#ifndef CHROMECAST_BASE_ANDROID_DUMPSTATE_WRITER_H_
#define CHROMECAST_BASE_ANDROID_DUMPSTATE_WRITER_H_

#include <jni.h>

#include <string>

namespace chromecast {

// JNI wrapper for DumpstateWriter.java.
class DumpstateWriter {
 public:
  DumpstateWriter() = delete;
  DumpstateWriter(const DumpstateWriter&) = delete;
  DumpstateWriter& operator=(const DumpstateWriter&) = delete;

  static void AddDumpValue(const std::string& name, const std::string& value);
};

}  // namespace chromecast

#endif  // CHROMECAST_BASE_ANDROID_DUMPSTATE_WRITER_H_
