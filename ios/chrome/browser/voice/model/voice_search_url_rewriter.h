// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Voice search URL rewriter declaration
// summary: Declares a URL rewriter function that adds voice search flags to Google search URLs during voice search.
// ---

#ifndef IOS_CHROME_BROWSER_VOICE_MODEL_VOICE_SEARCH_URL_REWRITER_H_
#define IOS_CHROME_BROWSER_VOICE_MODEL_VOICE_SEARCH_URL_REWRITER_H_

class GURL;
namespace web {
class BrowserState;
}

// Adds the voice search flags to `url` if it's a Google search URL.  This
// function is a web::BrowserURLRewriter::URLRewriter, and is intended to be
// used as a transient URLRewriter when performing a Google Search using Voice
// Search.
bool VoiceSearchURLRewriter(GURL* url, web::BrowserState* browser_state);

#endif  // IOS_CHROME_BROWSER_VOICE_MODEL_VOICE_SEARCH_URL_REWRITER_H_
