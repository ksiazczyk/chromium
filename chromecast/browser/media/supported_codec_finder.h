// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SupportedCodecFinder class declaration
// summary: Declares the SupportedCodecFinder class with a static method that returns the list of supported codec profile levels.
// ---

#ifndef CHROMECAST_BROWSER_MEDIA_SUPPORTED_CODEC_FINDER_H_
#define CHROMECAST_BROWSER_MEDIA_SUPPORTED_CODEC_FINDER_H_

#include <vector>

namespace chromecast {
namespace media {

struct CodecProfileLevel;

class SupportedCodecFinder {
 public:
  // Notifies the given MediaCaps of all found supported codecs.
  static std::vector<CodecProfileLevel> FindSupportedCodecProfileLevels();
};

}  // namespace media
}  // namespace chromecast

#endif  // CHROMECAST_BROWSER_MEDIA_SUPPORTED_CODEC_FINDER_H_
