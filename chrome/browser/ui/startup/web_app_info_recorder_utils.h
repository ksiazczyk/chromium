// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Web app info recorder utilities header
// summary: Declares WriteWebAppsToFile, which writes open and installed web apps for a given profile, or all profiles, to an output file.
// ---

#ifndef CHROME_BROWSER_UI_STARTUP_WEB_APP_INFO_RECORDER_UTILS_H_
#define CHROME_BROWSER_UI_STARTUP_WEB_APP_INFO_RECORDER_UTILS_H_

namespace base {
class FilePath;
}

namespace chrome {
namespace startup {

// Writes open and installed web apps for a given profile if
// `profile_base_name` is not empty, or for all profiles otherwise to the
// `output_file`.
void WriteWebAppsToFile(const base::FilePath& output_file,
                        const base::FilePath& profile_base_name);

}  // namespace startup
}  // namespace chrome

#endif  // CHROME_BROWSER_UI_STARTUP_WEB_APP_INFO_RECORDER_UTILS_H_
