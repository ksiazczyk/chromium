// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test network client stub for feed responses
// summary: Stub network client for feed tests that can be configured to return stored protobuf responses from a given file path or a default response.
// ---

package org.chromium.chrome.browser.feed;

import androidx.annotation.VisibleForTesting;

/**
 * A network client that returns configurable responses
 *  modified from org.chromium.chrome.browser.feed.library.mocknetworkclient.MockServerNetworkClient
 */
public class TestNetworkClient {
    public TestNetworkClient() {}

    /**
     * Set stored protobuf responses from the filePath
     *
     * @param filePath The file path of the compiled MockServer proto,
     *                 pass in null to use the default response
     */
    @VisibleForTesting
    public void setNetworkResponseFile(String filePath) {}
}
