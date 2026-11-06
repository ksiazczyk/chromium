// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Host event logger interface
// summary: Declares the HostEventLogger interface whose LogEvent method logs event trace data to a destination defined by each implementation.
// ---

#ifndef REMOTING_HOST_WIN_HOST_EVENT_LOGGER_H_
#define REMOTING_HOST_WIN_HOST_EVENT_LOGGER_H_

namespace remoting {

struct EventTraceData;

class HostEventLogger {
 public:
  virtual ~HostEventLogger() = default;

  // Logs |data| to the destination defined in the implementation class.
  virtual void LogEvent(const EventTraceData& data) = 0;
};

}  // namespace remoting

#endif  // REMOTING_HOST_WIN_HOST_EVENT_LOGGER_H_
