// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Network icon animation interface
// summary: Declares the NetworkIconAnimation singleton that synchronizes network icon animations and manages animation observers.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /base/observer_list.h
//   - depends_on /ui/gfx/animation/animation_delegate.h
// ---

#ifndef ASH_SYSTEM_NETWORK_NETWORK_ICON_ANIMATION_H_
#define ASH_SYSTEM_NETWORK_NETWORK_ICON_ANIMATION_H_

#include "ash/ash_export.h"
#include "base/observer_list.h"
#include "ui/gfx/animation/animation_delegate.h"
#include "ui/gfx/animation/throb_animation.h"

namespace ash {
namespace network_icon {

class AnimationObserver;

// Single instance class to handle icon animations and keep them in sync.
class ASH_EXPORT NetworkIconAnimation : public gfx::AnimationDelegate {
 public:
  NetworkIconAnimation();
  ~NetworkIconAnimation() override;

  // Returns the current animation value, [0-1].
  double GetAnimation();

  // The animation stops when all observers have been removed.
  // Be sure to remove observers when no associated icons are animating.
  void AddObserver(AnimationObserver* observer);
  void RemoveObserver(AnimationObserver* observer);

  // gfx::AnimationDelegate implementation.
  void AnimationProgressed(const gfx::Animation* animation) override;

  static NetworkIconAnimation* GetInstance();

 private:
  gfx::ThrobAnimation animation_;
  base::ObserverList<AnimationObserver>::Unchecked observers_;
};

}  // namespace network_icon
}  // namespace ash

#endif  // ASH_SYSTEM_NETWORK_NETWORK_ICON_ANIMATION_H_
