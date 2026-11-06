// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for common manifest handler registration
// summary: Declares RegisterCommonManifestHandlers, which registers manifest handlers used by all embedders of the extensions system.
// ---

#ifndef EXTENSIONS_COMMON_COMMON_MANIFEST_HANDLERS_H_
#define EXTENSIONS_COMMON_COMMON_MANIFEST_HANDLERS_H_

namespace extensions {
class ManifestHandlerRegistry;

// Registers manifest handlers used by all embedders of the extensions system.
// Should be called once in each process. Embedders may also wish to register
// their own set of manifest handlers, such as chrome_manifest_handlers.cc.
void RegisterCommonManifestHandlers(ManifestHandlerRegistry* registry);

}  // namespace extensions

#endif  // EXTENSIONS_COMMON_COMMON_MANIFEST_HANDLERS_H_
