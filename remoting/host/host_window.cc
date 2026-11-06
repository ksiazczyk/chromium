// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HostWindow implementation
// summary: Implements the HostWindow destructor with sequence validation for the host window abstraction.
// ---

#include "remoting/host/host_window.h"

namespace remoting {

HostWindow::~HostWindow() {
  DCHECK_CALLED_ON_VALID_SEQUENCE(sequence_checker_);
}

}  // namespace remoting
