// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Webdata constants implementation
// summary: Defines the file name constants for the Web Data and Account Web Data databases used by the webdata component.
// ---

#include "components/webdata/common/webdata_constants.h"

#include "build/build_config.h"

const base::FilePath::CharType kWebDataFilename[] =
    FILE_PATH_LITERAL("Web Data");
const base::FilePath::CharType kAccountWebDataFilename[] =
    FILE_PATH_LITERAL("Account Web Data");
