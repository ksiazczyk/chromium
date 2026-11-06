// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedFileWriter implementation
// summary: Implements ScopedFileWriter, a scoped writer for pak files that tracks I/O errors and closes the file on destruction.
// ---

#include "ui/base/resource/scoped_file_writer.h"

#include "base/compiler_specific.h"
#include "base/files/file_util.h"
#include "base/logging.h"

namespace ui {

// ScopedFileWriter implementation.
ScopedFileWriter::ScopedFileWriter(const base::FilePath& path)
    : valid_(true),
      file_(path, base::File::FLAG_CREATE_ALWAYS | base::File::FLAG_WRITE) {
  if (!file_.IsValid()) {
    LOG(ERROR) << "Could not open pak file for writing: "
               << base::File::ErrorToString(file_.error_details());
    valid_ = false;
  }
}

ScopedFileWriter::~ScopedFileWriter() {
  Close();
}

void ScopedFileWriter::Write(base::span<const uint8_t> data) {
  if (data.empty()) {
    return;
  }

  if (valid_ && !file_.WriteAtCurrentPosAndCheck(data)) {
    PLOG(ERROR) << "Could not write to pak file";
    valid_ = false;
  }
}

bool ScopedFileWriter::Close() {
  if (file_.IsValid()) {
    file_.Close();
  }
  return valid_;
}

}  // namespace ui
