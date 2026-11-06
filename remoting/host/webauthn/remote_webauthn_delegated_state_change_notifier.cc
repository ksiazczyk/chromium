// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Delegated remote WebAuthn state change notifier
// summary: Implements a state change notifier that forwards NotifyStateChange calls to a provided base::RepeatingClosure callback.
// ---

#include "remoting/host/webauthn/remote_webauthn_delegated_state_change_notifier.h"

namespace remoting {

RemoteWebAuthnDelegatedStateChangeNotifier::
    RemoteWebAuthnDelegatedStateChangeNotifier(
        const base::RepeatingClosure& notify_state_change)
    : notify_state_change_(notify_state_change) {}

RemoteWebAuthnDelegatedStateChangeNotifier::
    ~RemoteWebAuthnDelegatedStateChangeNotifier() = default;

void RemoteWebAuthnDelegatedStateChangeNotifier::NotifyStateChange() {
  notify_state_change_.Run();
}

}  // namespace remoting
