// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Layer tree JSON parser declaration
// summary: Declares ParseTreeFromJson, which builds a cc layer tree from a JSON string for use in tests.
// ---

#ifndef CC_TEST_LAYER_TREE_JSON_PARSER_H_
#define CC_TEST_LAYER_TREE_JSON_PARSER_H_

#include <string>

#include "base/memory/scoped_refptr.h"

namespace cc {

class ContentLayerClient;
class Layer;

scoped_refptr<Layer> ParseTreeFromJson(std::string json,
                                       ContentLayerClient* content_client);

}  // namespace cc

#endif  // CC_TEST_LAYER_TREE_JSON_PARSER_H_
