// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MediaFoundationCdmData struct header
// summary: Declares the MediaFoundationCdmData struct carrying an origin ID and CDM store path root for Media Foundation CDM use.
// ---

#ifndef MEDIA_CDM_MEDIA_FOUNDATION_CDM_DATA_H_
#define MEDIA_CDM_MEDIA_FOUNDATION_CDM_DATA_H_

#include "base/files/file_path.h"
#include "base/unguessable_token.h"
#include "media/base/media_export.h"

namespace media {
struct MEDIA_EXPORT MediaFoundationCdmData {
  MediaFoundationCdmData();
  MediaFoundationCdmData(const base::UnguessableToken& origin_id,
                         const base::FilePath& cdm_store_path_root);

  MediaFoundationCdmData(const MediaFoundationCdmData& other) = delete;
  MediaFoundationCdmData& operator=(const MediaFoundationCdmData& other) =
      delete;

  ~MediaFoundationCdmData();

  base::UnguessableToken origin_id;
  base::FilePath cdm_store_path_root;
};
}  // namespace media

#endif  // MEDIA_CDM_MEDIA_FOUNDATION_CDM_DATA_H_
