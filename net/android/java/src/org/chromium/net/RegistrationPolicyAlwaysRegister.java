// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Registration policy that always registers the network listener
// summary: Registration policy that keeps the NetworkChangeNotifierAutoDetect listener permanently registered with no unregister path.
// ---

package org.chromium.net;

import org.chromium.build.annotations.NullMarked;

/** Registration policy which make sure that the listener is always registered. */
@NullMarked
public class RegistrationPolicyAlwaysRegister
        extends NetworkChangeNotifierAutoDetect.RegistrationPolicy {
    @Override
    protected void init(NetworkChangeNotifierAutoDetect notifier) {
        super.init(notifier);
        register();
    }

    @Override
    protected void destroy() {}
}
