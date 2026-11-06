// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Webdata constants header
// summary: Declares the exported constants holding the Web Data and Account Web Data database filenames.
// ---

#ifndef COMPONENTS_WEBDATA_COMMON_WEBDATA_CONSTANTS_H_
#define COMPONENTS_WEBDATA_COMMON_WEBDATA_CONSTANTS_H_

#include "base/files/file_path.h"
#include "build/build_config.h"
#include "components/webdata/common/webdata_export.h"

WEBDATA_EXPORT extern const base::FilePath::CharType kWebDataFilename[];

WEBDATA_EXPORT extern const base::FilePath::CharType kAccountWebDataFilename[];

#endif  // COMPONENTS_WEBDATA_COMMON_WEBDATA_CONSTANTS_H_
