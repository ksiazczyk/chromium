// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Local wallpaper file enumerator header
// summary: Declares EnumerateLocalWallpaperFiles, which searches user files for images usable as custom wallpapers.
// ---

#ifndef CHROME_BROWSER_ASH_WALLPAPER_WALLPAPER_ENUMERATOR_H_
#define CHROME_BROWSER_ASH_WALLPAPER_WALLPAPER_ENUMERATOR_H_

#include <vector>

#include "base/files/file_path.h"
#include "base/functional/callback_forward.h"

class PrefService;
class Profile;

namespace ash {

// Searches the user's files for jpg and png images. This is used for
// displaying images that the user could select as a custom wallpaper.
void EnumerateLocalWallpaperFiles(
    const PrefService& local_state,
    Profile* profile,
    base::OnceCallback<void(const std::vector<base::FilePath>&)> callback);

}  // namespace ash

#endif  // CHROME_BROWSER_ASH_WALLPAPER_WALLPAPER_ENUMERATOR_H_
