// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HttpCache boundary interface
// summary: Boundary interface for managing the HTTP cache quota, including reading and setting the quota in bytes and reverting to the default quota.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;

/** Boundary interface for HttpCache. */
@NullMarked
public interface HttpCacheBoundaryInterface {
    long getDefaultQuotaBytes();

    boolean isUsingDefaultQuota();

    void useDefaultQuota();

    long getQuotaBytes();

    void setQuotaBytes(long quotaInBytes);
}
