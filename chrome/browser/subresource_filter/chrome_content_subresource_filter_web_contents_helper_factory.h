// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Web contents helper factory header
// summary: Declares CreateSubresourceFilterWebContentsHelper, which attaches the per-Page subresource filtering helper to a WebContents.
// ---

#ifndef CHROME_BROWSER_SUBRESOURCE_FILTER_CHROME_CONTENT_SUBRESOURCE_FILTER_WEB_CONTENTS_HELPER_FACTORY_H_
#define CHROME_BROWSER_SUBRESOURCE_FILTER_CHROME_CONTENT_SUBRESOURCE_FILTER_WEB_CONTENTS_HELPER_FACTORY_H_

namespace content {
class WebContents;
}  // namespace content

// Creates a ContentSubresourceFilterWebContentsHelper object and attaches it
// to |web_contents|. This object manages the per-Page objects in a WebContents
// for subresource filtering in.
void CreateSubresourceFilterWebContentsHelper(
    content::WebContents* web_contents);

#endif  // CHROME_BROWSER_SUBRESOURCE_FILTER_CHROME_CONTENT_SUBRESOURCE_FILTER_WEB_CONTENTS_HELPER_FACTORY_H_
