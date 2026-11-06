// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Media Galleries custom bindings header
// summary: Declares MediaGalleriesCustomBindings, a native handler that implements custom bindings for the media galleries extension API, including the get media file system object route.
// ---

#ifndef CHROME_RENDERER_EXTENSIONS_API_MEDIA_GALLERIES_CUSTOM_BINDINGS_H_
#define CHROME_RENDERER_EXTENSIONS_API_MEDIA_GALLERIES_CUSTOM_BINDINGS_H_

#include "extensions/renderer/object_backed_native_handler.h"

namespace extensions {

// Implements custom bindings for the media galleries API.
class MediaGalleriesCustomBindings : public ObjectBackedNativeHandler {
 public:
  explicit MediaGalleriesCustomBindings(ScriptContext* context);

  MediaGalleriesCustomBindings(const MediaGalleriesCustomBindings&) = delete;
  MediaGalleriesCustomBindings& operator=(const MediaGalleriesCustomBindings&) =
      delete;

  // ObjectBackedNativeHandler:
  void AddRoutes() override;

 private:
  void GetMediaFileSystemObject(
      const v8::FunctionCallbackInfo<v8::Value>& args);
};

}  // namespace extensions

#endif  // CHROME_RENDERER_EXTENSIONS_API_MEDIA_GALLERIES_CUSTOM_BINDINGS_H_
