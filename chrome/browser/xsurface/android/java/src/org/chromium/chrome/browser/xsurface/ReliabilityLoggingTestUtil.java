// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ReliabilityLoggingTestUtil forwarding interface to the feed package
// summary: Deprecated interface that simply extends the reliability logging test utility now located in the xsurface feed package.
// ---

package org.chromium.chrome.browser.xsurface;

import org.jspecify.annotations.NullMarked;

/** Moving to ./feed/ */
@NullMarked
public interface ReliabilityLoggingTestUtil
        extends org.chromium.chrome.browser.xsurface.feed.ReliabilityLoggingTestUtil {}
