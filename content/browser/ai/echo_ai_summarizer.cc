// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: EchoAISummarizer implementation
// summary: Implements EchoAISummarizer by streaming the input back with a model-unavailable notice and measuring usage as input plus context size.
// ---

#include "content/browser/ai/echo_ai_summarizer.h"

#include <optional>

#include "base/functional/bind.h"
#include "base/location.h"
#include "base/time/time.h"
#include "content/public/browser/browser_thread.h"
#include "mojo/public/cpp/bindings/remote.h"
#include "mojo/public/cpp/bindings/self_owned_receiver.h"
#include "third_party/blink/public/mojom/ai/model_streaming_responder.mojom.h"

namespace content {

EchoAISummarizer::EchoAISummarizer() = default;

EchoAISummarizer::~EchoAISummarizer() = default;

void EchoAISummarizer::Summarize(
    const std::string& input,
    const std::string& context,
    mojo::PendingRemote<blink::mojom::ModelStreamingResponder>
        pending_responder) {
  mojo::Remote<blink::mojom::ModelStreamingResponder> responder(
      std::move(pending_responder));
  responder->OnStreaming("Model not available in Chromium\n" + input);
  responder->OnCompletion(/*context_info=*/nullptr);
}

void EchoAISummarizer::MeasureUsage(const std::string& input,
                                    const std::string& context,
                                    MeasureUsageCallback callback) {
  std::move(callback).Run(input.size() + context.size());
}

}  // namespace content
