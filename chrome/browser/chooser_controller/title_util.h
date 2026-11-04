// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chooser title utility header
// summary: Declares CreateChooserTitle, which builds chooser titles from the extension or isolated web app name when possible and otherwise from the main frame origin.
// ---

#ifndef CHROME_BROWSER_CHOOSER_CONTROLLER_TITLE_UTIL_H_
#define CHROME_BROWSER_CHOOSER_CONTROLLER_TITLE_UTIL_H_

#include <string>

namespace content {
class RenderFrameHost;
}

// Creates a title for a chooser.
// For Isolated Web Apps the app name is used if possible.
// For extensions the extension name is used if possible.
// In all other cases the origin of the main frame for
// `render_frame_host` is used.
std::u16string CreateChooserTitle(content::RenderFrameHost* render_frame_host,
                                  int title_string_id);

#endif  // CHROME_BROWSER_CHOOSER_CONTROLLER_TITLE_UTIL_H_
