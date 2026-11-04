// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PopFront and PopBack container helpers
// summary: Template helpers that remove and return the front or back element of a container by move.
// ---

#ifndef CC_BASE_CONTAINER_UTIL_H_
#define CC_BASE_CONTAINER_UTIL_H_

#include <utility>

namespace cc {

// Removes the front element from the container and returns it.
template <typename Container>
typename Container::value_type PopFront(Container* container) {
  typename Container::value_type element = std::move(container->front());
  container->pop_front();
  return element;
}

// Removes the back element from the container and returns it.
template <typename Container>
typename Container::value_type PopBack(Container* container) {
  typename Container::value_type element = std::move(container->back());
  container->pop_back();
  return element;
}

}  // namespace cc

#endif  // CC_BASE_CONTAINER_UTIL_H_
