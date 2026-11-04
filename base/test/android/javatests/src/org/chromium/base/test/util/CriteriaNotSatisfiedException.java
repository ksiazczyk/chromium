// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Exception for unsatisfied test criteria
// summary: Runtime exception thrown when a Criteria check does not match expectations.
// ---

package org.chromium.base.test.util;

/** Exception indicating that a Criteria did not match expectations. */
public class CriteriaNotSatisfiedException extends RuntimeException {
    /**
     * @param msg The reason the criteria was not met.
     */
    public CriteriaNotSatisfiedException(String msg) {
        super(msg);
    }

    /**
     * @param cause The underlying exception that prevented the Criteria.
     */
    public CriteriaNotSatisfiedException(Throwable cause) {
        super(cause);
    }
}
