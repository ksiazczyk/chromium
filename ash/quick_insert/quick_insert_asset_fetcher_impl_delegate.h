// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert asset fetcher delegate interface
// summary: Declares the delegate interface supplying a URL loader factory and file thumbnail fetching to the asset fetcher implementation.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /base/files/file.h
//   - depends_on /base/memory/scoped_refptr.h
// ---

#ifndef ASH_QUICK_INSERT_QUICK_INSERT_ASSET_FETCHER_IMPL_DELEGATE_H_
#define ASH_QUICK_INSERT_QUICK_INSERT_ASSET_FETCHER_IMPL_DELEGATE_H_

#include "ash/ash_export.h"
#include "base/files/file.h"
#include "base/memory/scoped_refptr.h"

class SkBitmap;

namespace gfx {
class Size;
}

namespace network {
class SharedURLLoaderFactory;
}  // namespace network

namespace ash {

class ASH_EXPORT QuickInsertAssetFetcherImplDelegate {
 public:
  using FetchFileThumbnailCallback =
      base::OnceCallback<void(const SkBitmap* bitmap, base::File::Error error)>;

  virtual ~QuickInsertAssetFetcherImplDelegate() = default;

  virtual scoped_refptr<network::SharedURLLoaderFactory>
  GetSharedURLLoaderFactory() = 0;

  // Fetches the thumbnail for a file and calls `callback` with the result.
  virtual void FetchFileThumbnail(const base::FilePath& path,
                                  const gfx::Size& size,
                                  FetchFileThumbnailCallback callback) = 0;
};

}  // namespace ash

#endif  // ASH_QUICK_INSERT_QUICK_INSERT_ASSET_FETCHER_IMPL_DELEGATE_H_
