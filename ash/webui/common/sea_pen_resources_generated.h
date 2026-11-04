// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for generated SeaPen template strings
// summary: Declares functions to add generated SeaPen wallpaper and VC background template strings to a WebUI data source.
// ---

#ifndef ASH_WEBUI_COMMON_SEA_PEN_RESOURCES_GENERATED_H_
#define ASH_WEBUI_COMMON_SEA_PEN_RESOURCES_GENERATED_H_

#include "content/public/browser/web_ui_data_source.h"

namespace content {
class WebUIDataSource;
}  // namespace content

namespace ash::common {

void AddSeaPenWallpaperTemplateStrings(content::WebUIDataSource* source);

void AddSeaPenVcBackgroundTemplateStrings(content::WebUIDataSource* source);

}  // namespace ash::common

#endif  // ASH_WEBUI_COMMON_SEA_PEN_RESOURCES_GENERATED_H_
