// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Reader Mode web state utilities
// summary: Declares a utility that reports whether Reader mode is active in a given web state.
// ---

#ifndef IOS_CHROME_BROWSER_READER_MODE_MODEL_READER_MODE_WEB_STATE_UTILS_H_
#define IOS_CHROME_BROWSER_READER_MODE_MODEL_READER_MODE_WEB_STATE_UTILS_H_

namespace web {
class WebState;
}

// Returns whether there is an active Reader mode attached to the given
// `web_state`.
bool IsReaderModeActiveInWebState(web::WebState* web_state);

#endif  // IOS_CHROME_BROWSER_READER_MODE_MODEL_READER_MODE_WEB_STATE_UTILS_H_
