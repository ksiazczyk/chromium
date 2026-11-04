// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test download directory provider
// summary: Test helper extending DownloadDirectoryProvider to return an arbitrary list of download directory options during tests.
// ---

package org.chromium.chrome.browser.download;

import org.chromium.base.Callback;
import org.chromium.base.task.PostTask;
import org.chromium.base.task.TaskTraits;

import java.util.ArrayList;

/** Used to provide arbitary number of download directories in tests. */
public class TestDownloadDirectoryProvider extends DownloadDirectoryProvider {
    private final ArrayList<DirectoryOption> mDirectoryOptions;

    public TestDownloadDirectoryProvider(ArrayList<DirectoryOption> dirs) {
        super();
        mDirectoryOptions = dirs;
    }

    // DownloadDirectoryProvider implementation.
    @Override
    public void getAllDirectoriesOptions(Callback<ArrayList<DirectoryOption>> callback) {
        PostTask.postTask(TaskTraits.UI_DEFAULT, callback.bind(mDirectoryOptions));
    }
}
