// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Universal WebContents observers declarations
// summary: Declares AttachUniversalWebContentsObservers, which attaches observers that apply to all WebContents rather than only tabs.
// ---

#ifndef CHROME_BROWSER_UNIVERSAL_WEB_CONTENTS_OBSERVERS_H_
#define CHROME_BROWSER_UNIVERSAL_WEB_CONTENTS_OBSERVERS_H_

namespace content {
class WebContents;
}  // namespace content

// Attaches WebContentsObservers that are universal (ones that should apply to
// all WebContents).
void AttachUniversalWebContentsObservers(content::WebContents* web_contents);

#endif  // CHROME_BROWSER_UNIVERSAL_WEB_CONTENTS_OBSERVERS_H_
