// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MediaFeeds class declaration
// summary: Declares the MediaFeeds helper class with a static method that returns the media feed URL for a render frame, if one is present.
// ---

#ifndef CHROME_RENDERER_MEDIA_MEDIA_FEEDS_H_
#define CHROME_RENDERER_MEDIA_MEDIA_FEEDS_H_

#include <optional>

class GURL;

namespace content {
class RenderFrame;
}  // namespace content

class MediaFeeds {
 public:
  // Gets the Media Feed URL (if present).
  static std::optional<GURL> GetMediaFeedURL(content::RenderFrame* frame);
};

#endif  // CHROME_RENDERER_MEDIA_MEDIA_FEEDS_H_
