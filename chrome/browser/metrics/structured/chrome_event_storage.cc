// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome event storage implementation
// summary: Implements ChromeEventStorage, the in-memory storage for structured metrics events on Chrome, supporting adding, taking, counting, purging, and copying events.
// ---

#include "chrome/browser/metrics/structured/chrome_event_storage.h"
#include "components/metrics/structured/histogram_util.h"

namespace metrics::structured {

using ::google::protobuf::RepeatedPtrField;

ChromeEventStorage::ChromeEventStorage() = default;

ChromeEventStorage::~ChromeEventStorage() = default;

void ChromeEventStorage::AddEvent(StructuredEventProto event) {
  *events_.add_events() = std::move(event);
}

void ChromeEventStorage::TakeEvents(base::OnceCallback<void(Events)> consumer) {
  std::move(consumer).Run(std::move(*events_.mutable_events()));
}

int ChromeEventStorage::RecordedEventsCount() const {
  return events_.events_size();
}

void ChromeEventStorage::Purge() {
  events_.clear_events();
}

void ChromeEventStorage::CopyEvents(EventsProto* proto) const {
  proto->mutable_events()->MergeFrom(events_.events());
}

}  // namespace metrics::structured
