// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VideoFrameController interface header
// summary: Declares VideoFrameController and VideoFrameControllerClient interfaces for receiving begin frame callbacks and draw completion notifications.
// ---

#ifndef CC_SCHEDULER_VIDEO_FRAME_CONTROLLER_H_
#define CC_SCHEDULER_VIDEO_FRAME_CONTROLLER_H_

#include "cc/cc_export.h"
#include "components/viz/common/frame_sinks/begin_frame_args.h"

namespace cc {

class VideoFrameController;

class CC_EXPORT VideoFrameControllerClient {
 public:
  virtual void AddVideoFrameController(VideoFrameController* controller) = 0;
  virtual void RemoveVideoFrameController(VideoFrameController* controller) = 0;

 protected:
  virtual ~VideoFrameControllerClient() {}
};

// TODO(sunnyps): Consider making this a viz::BeginFrameObserver some day.
class CC_EXPORT VideoFrameController {
 public:
  virtual void OnBeginFrame(const viz::BeginFrameArgs& args) = 0;

  // Called upon completion of LayerTreeHostImpl::DidDrawAllLayers(), regardless
  // of whether the controller issued a SetNeedsRedraw().  May be used to
  // determine when SetNeedsRedraw() is called but the draw is aborted.
  virtual void DidDrawFrame() = 0;

 protected:
  virtual ~VideoFrameController() {}
};

}  // namespace cc

#endif  // CC_SCHEDULER_VIDEO_FRAME_CONTROLLER_H_
