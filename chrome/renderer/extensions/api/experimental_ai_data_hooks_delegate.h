// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Experimental AI data API hooks delegate header
// summary: Declares the hooks delegate that resolves live DOM nodes synchronously for the experimentalAiData extension API.
// ---

#ifndef CHROME_RENDERER_EXTENSIONS_API_EXPERIMENTAL_AI_DATA_HOOKS_DELEGATE_H_
#define CHROME_RENDERER_EXTENSIONS_API_EXPERIMENTAL_AI_DATA_HOOKS_DELEGATE_H_

#include "extensions/renderer/bindings/api_binding_hooks_delegate.h"

namespace extensions {

// Resolves live DOM nodes synchronously.
class ExperimentalAiDataHooksDelegate : public APIBindingHooksDelegate {
 public:
  APIBindingHooks::RequestResult HandleRequest(
      const std::string& method_name,
      const APISignature* signature,
      v8::Local<v8::Context> context,
      v8::LocalVector<v8::Value>* arguments,
      const APITypeReferenceMap& refs) override;
};

}  // namespace extensions

#endif  // CHROME_RENDERER_EXTENSIONS_API_EXPERIMENTAL_AI_DATA_HOOKS_DELEGATE_H_
