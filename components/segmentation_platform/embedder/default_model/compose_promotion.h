// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Compose promotion segment model header
// summary: Declares the ComposePromotion default model provider class for the Compose promotion segment.
// ---

#ifndef COMPONENTS_SEGMENTATION_PLATFORM_EMBEDDER_DEFAULT_MODEL_COMPOSE_PROMOTION_H_
#define COMPONENTS_SEGMENTATION_PLATFORM_EMBEDDER_DEFAULT_MODEL_COMPOSE_PROMOTION_H_

#include <memory>

#include "components/segmentation_platform/public/config.h"
#include "components/segmentation_platform/public/model_provider.h"

namespace segmentation_platform {

// Model to predict whether the user belongs to ComposePromotion segment.
class ComposePromotion : public DefaultModelProvider {
 public:
  enum Feature {
    kLabelRandom,
    kFeatureCount,
  };

  ComposePromotion();
  ~ComposePromotion() override = default;

  ComposePromotion(const ComposePromotion&) = delete;
  ComposePromotion& operator=(const ComposePromotion&) = delete;

  static std::unique_ptr<Config> GetConfig();

  // ModelProvider implementation.
  std::unique_ptr<ModelConfig> GetModelConfig() override;
  void ExecuteModelWithInput(const ModelProvider::Request& inputs,
                             ExecutionCallback callback) override;
};

}  // namespace segmentation_platform

#endif  // COMPONENTS_SEGMENTATION_PLATFORM_EMBEDDER_DEFAULT_MODEL_COMPOSE_PROMOTION_H_
