// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Slideshow delegate for the ambient topic queue
// summary: Declares AmbientTopicQueueSlideshowDelegate, which provides full-screen display sizes for the image slideshow UI.
// relations:
//   - depends_on /ash/ambient/model/ambient_topic_queue.h
//   - depends_on /ash/ash_export.h
//   - implements /ash/ambient/model/ambient_topic_queue.h
// ---

#ifndef ASH_AMBIENT_MODEL_AMBIENT_TOPIC_QUEUE_SLIDESHOW_DELEGATE_H_
#define ASH_AMBIENT_MODEL_AMBIENT_TOPIC_QUEUE_SLIDESHOW_DELEGATE_H_

#include "ash/ambient/model/ambient_topic_queue.h"
#include "ash/ash_export.h"

namespace ash {

// For the UI that iterates through a slideshow of images and displays them at
// full-screen resolution.
class ASH_EXPORT AmbientTopicQueueSlideshowDelegate
    : public AmbientTopicQueue::Delegate {
 public:
  AmbientTopicQueueSlideshowDelegate();
  AmbientTopicQueueSlideshowDelegate(
      const AmbientTopicQueueSlideshowDelegate&) = delete;
  AmbientTopicQueueSlideshowDelegate& operator=(
      const AmbientTopicQueueSlideshowDelegate&) = delete;
  ~AmbientTopicQueueSlideshowDelegate() override;

  // AmbientTopicQueue::Delegate implementation:
  std::vector<gfx::Size> GetTopicSizes() override;
};

}  // namespace ash

#endif  // ASH_AMBIENT_MODEL_AMBIENT_TOPIC_QUEUE_SLIDESHOW_DELEGATE_H_
