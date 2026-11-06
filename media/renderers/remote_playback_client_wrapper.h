// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote playback client wrapper interface
// summary: Abstract wrapper exposing only the WebRemotePlaybackClient methods needed by FlingingRendererClientFactory, avoiding dependencies on the blink layer.
// ---

#ifndef MEDIA_RENDERERS_REMOTE_PLAYBACK_CLIENT_WRAPPER_H_
#define MEDIA_RENDERERS_REMOTE_PLAYBACK_CLIENT_WRAPPER_H_

namespace media {

// Wraps a WebRemotePlaybackClient to expose only the methods used by the
// FlingingRendererClientFactory. This avoids dependencies on the blink layer.
class RemotePlaybackClientWrapper {
 public:
  RemotePlaybackClientWrapper() = default;
  virtual ~RemotePlaybackClientWrapper() = default;

  virtual std::string GetActivePresentationId() = 0;
};

}  // namespace media

#endif  // MEDIA_RENDERERS_REMOTE_PLAYBACK_CLIENT_WRAPPER_H_
