// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Renderer ID test utility header
// summary: Declares a test helper that creates a JavaScript feature injecting the renderer_id_test script.
// ---

#ifndef COMPONENTS_AUTOFILL_IOS_FORM_UTIL_RENDERER_ID_TEST_UTIL_H_
#define COMPONENTS_AUTOFILL_IOS_FORM_UTIL_RENDERER_ID_TEST_UTIL_H_

#import <memory>

namespace web {
class JavaScriptFeature;
}

namespace autofill::test {

// Creates a JavaScriptFeature for the renderer_id_test script.
std::unique_ptr<web::JavaScriptFeature> CreateRendererIdTestJavaScriptFeature();

}  // namespace autofill::test

#endif  // COMPONENTS_AUTOFILL_IOS_FORM_UTIL_RENDERER_ID_TEST_UTIL_H_
