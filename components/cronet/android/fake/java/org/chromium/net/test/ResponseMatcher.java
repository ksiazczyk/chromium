// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Interface for matching UrlRequests to fake responses
// summary: Interface that optionally returns a FakeUrlResponse based on a request's URL, HTTP method, headers, and body.
// ---

package org.chromium.net.test;

import androidx.annotation.Nullable;

import org.chromium.net.UrlRequest;

import java.util.List;
import java.util.Map;

/** An interface for matching {@link UrlRequest}s to {@link FakeUrlResponse}s. */
public interface ResponseMatcher {
    /**
     * Optionally gets a response based on the request parameters.
     *
     * @param url the URL the {@link UrlRequest} is connecting to
     * @param httpMethod the HTTP method the {@link UrlRequest} is connecting with
     * @param headers the {@link UrlRequest} headers
     * @param body the body of the request
     * @return a {@link FakeUrlResponse} if there is a matching response, or {@code null} otherwise
     */
    @Nullable
    FakeUrlResponse getMatchingResponse(
            String url, String httpMethod, List<Map.Entry<String, String>> headers, byte[] body);
}
