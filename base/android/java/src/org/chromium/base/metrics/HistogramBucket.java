// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: 'HistogramBucket: single histogram bucket'
// summary: Represents one histogram bucket with its minimum, maximum and record count, and can check whether a value falls within the bucket.
// ---

package org.chromium.base.metrics;

import org.chromium.build.annotations.NullMarked;

/** Represents one single bucket of a histogram, with the count of records in that bucket. */
@NullMarked
public class HistogramBucket {
    public final int mMin;
    public final long mMax;
    public final int mCount;

    public HistogramBucket(int min, long max, int count) {
        mMin = min;
        mMax = max;
        mCount = count;
    }

    public boolean contains(int value) {
        return value >= mMin && value < mMax;
    }
}
