// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedDragDropObserver class header
// summary: Declares ScopedDragDropObserver, which observes an aura drag-drop client for its lifetime and forwards drag updated, completed, and cancelled events to a supplied callback.
// relations:
//   - implements /ash/shell_observer.h
//   - depends_on /base/functional/callback.h
//   - depends_on /base/scoped_observation.h
// ---

#ifndef ASH_DRAG_DROP_SCOPED_DRAG_DROP_OBSERVER_H_
#define ASH_DRAG_DROP_SCOPED_DRAG_DROP_OBSERVER_H_

#include "ash/shell_observer.h"
#include "base/functional/callback.h"
#include "base/scoped_observation.h"
#include "ui/aura/client/drag_drop_client_observer.h"

namespace ui {
class DropTargetEvent;
}  // namespace ui

namespace aura::client {
class DragDropClient;
}  // namespace aura::client

namespace ash {

class Shell;

// A class which observes an `aura::client::DragDropClient` for the scope of its
// existence. Drag events are passed to a callback supplied in the constructor.
class ASH_EXPORT ScopedDragDropObserver
    : public aura::client::DragDropClientObserver,
      public ShellObserver {
 public:
  enum class EventType { kDragUpdated, kDragCompleted, kDragCancelled };

  // NOTE: `event` is `nullptr` for `event_type` == `EventType::kDragCancelled`.
  using EventCallback =
      base::RepeatingCallback<void(EventType event_type,
                                   const ui::DropTargetEvent* event)>;

  ScopedDragDropObserver(aura::client::DragDropClient* client,
                         EventCallback event_callback);
  ScopedDragDropObserver(const ScopedDragDropObserver&) = delete;
  ScopedDragDropObserver& operator=(const ScopedDragDropObserver&) = delete;
  ~ScopedDragDropObserver() override;

 private:
  // aura::client::DragDropClientObserver:
  void OnDragUpdated(const ui::DropTargetEvent& event) override;
  void OnDragCompleted(const ui::DropTargetEvent& event) override;
  void OnDragCancelled() override;

  // ShellObserver:
  void OnShellDestroying() override;

  EventCallback event_callback_;
  base::ScopedObservation<aura::client::DragDropClient,
                          aura::client::DragDropClientObserver>
      drag_drop_client_observer_{this};
  base::ScopedObservation<Shell, ShellObserver> shell_observer_{this};
};

}  // namespace ash

#endif  // ASH_DRAG_DROP_SCOPED_DRAG_DROP_OBSERVER_H_
