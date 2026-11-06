// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Media component export macro
// summary: Defines the MEDIA_EXPORT macro as an alias of COMPONENT_EXPORT(MEDIA) for symbol visibility in the media component.
// ---

#ifndef MEDIA_BASE_MEDIA_EXPORT_H_
#define MEDIA_BASE_MEDIA_EXPORT_H_

#include "base/component_export.h"

#define MEDIA_EXPORT COMPONENT_EXPORT(MEDIA)

#endif  // MEDIA_BASE_MEDIA_EXPORT_H_
