// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: System modal container event filter header
// summary: Declares SystemModalContainerEventFilter, an event handler that forwards events to a delegate for filtering in the system modal container.
// ---

#ifndef ASH_WM_SYSTEM_MODAL_CONTAINER_EVENT_FILTER_H_
#define ASH_WM_SYSTEM_MODAL_CONTAINER_EVENT_FILTER_H_

#include "ash/ash_export.h"
#include "base/compiler_specific.h"
#include "base/memory/raw_ptr.h"
#include "ui/events/event_handler.h"

namespace ash {

class SystemModalContainerEventFilterDelegate;

class ASH_EXPORT SystemModalContainerEventFilter : public ui::EventHandler {
 public:
  explicit SystemModalContainerEventFilter(
      SystemModalContainerEventFilterDelegate* delegate);

  SystemModalContainerEventFilter(const SystemModalContainerEventFilter&) =
      delete;
  SystemModalContainerEventFilter& operator=(
      const SystemModalContainerEventFilter&) = delete;

  ~SystemModalContainerEventFilter() override;

  // ui::EventHandler:
  void OnEvent(ui::Event* event) override;

 private:
  raw_ptr<SystemModalContainerEventFilterDelegate> delegate_;
};

}  // namespace ash

#endif  // ASH_WM_SYSTEM_MODAL_CONTAINER_EVENT_FILTER_H_
