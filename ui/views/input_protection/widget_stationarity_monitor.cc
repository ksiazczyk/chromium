// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Widget stationarity monitor implementation
// summary: Implements the WidgetStationarityMonitor singleton that tracks widgets and notifies subscribers when a tracked widget changes bounds or is destroyed.
// ---

#include "ui/views/input_protection/widget_stationarity_monitor.h"

#include <utility>

#include "base/no_destructor.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/views/widget/widget.h"

namespace views {

// static
WidgetStationarityMonitor& WidgetStationarityMonitor::GetInstance() {
  static base::NoDestructor<WidgetStationarityMonitor> instance;
  return *instance;
}

WidgetStationarityMonitor::WidgetStationarityMonitor() = default;

WidgetStationarityMonitor::~WidgetStationarityMonitor() = default;

void WidgetStationarityMonitor::TrackWidget(Widget& widget) {
  if (widget_observations_.IsObservingSource(&widget)) {
    return;
  }
  widget_observations_.AddObservation(&widget);
}

void WidgetStationarityMonitor::OnWidgetBoundsChanged(
    Widget* widget,
    const gfx::Rect& new_bounds) {
  NotifyStationaryStateChanged();
}

void WidgetStationarityMonitor::OnWidgetDestroying(Widget* widget) {
  widget_observations_.RemoveObservation(widget);
  NotifyStationaryStateChanged();
}

base::CallbackListSubscription
WidgetStationarityMonitor::RegisterStationarityChangedCallback(
    base::PassKey<InputEventActivationProtector>,
    StationarityChangedCallbackList::CallbackType callback) {
  return stationarity_changed_callbacks_.Add(std::move(callback));
}

base::CallbackListSubscription
WidgetStationarityMonitor::RegisterStationarityChangedCallbackForTesting(
    StationarityChangedCallbackList::CallbackType callback) {
  return stationarity_changed_callbacks_.Add(std::move(callback));
}

void WidgetStationarityMonitor::NotifyStationaryStateChanged() {
  stationarity_changed_callbacks_.Notify();
}

}  // namespace views
