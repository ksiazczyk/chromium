// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: No-op label adder for download home list
// summary: Implements the LabelAdder interface as a no-op that passes the download list through to the next consumer without adding any labels.
// ---

package org.chromium.chrome.browser.download.home.list.mutator;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.download.home.list.ListItem;

import java.util.List;

/** Implementation of {@link LabelAdder} that doesn't add any labels. */
@NullMarked
public class NoopLabelAdder implements ListConsumer {
    private @Nullable ListConsumer mListConsumer;

    public NoopLabelAdder() {}

    @Override
    public ListConsumer setListConsumer(ListConsumer consumer) {
        mListConsumer = consumer;
        return mListConsumer;
    }

    @Override
    public void onListUpdated(List<ListItem> inputList) {
        if (mListConsumer == null) return;
        mListConsumer.onListUpdated(addLabels(inputList));
    }

    private List<ListItem> addLabels(List<ListItem> sortedList) {
        return sortedList;
    }
}
