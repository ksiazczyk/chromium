// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Loader for unuploaded minidump crash states
// summary: CrashInfoLoader that reads unuploaded minidump files from the crash directory and derives their upload state, local id, and trial count from file names.
// relations:
//   - depends_on /android_webview/nonembedded/java/src/org/chromium/android_webview/devui/util/CrashInfoLoader.java
// ---

package org.chromium.android_webview.devui.util;

import org.chromium.android_webview.nonembedded.crash.CrashInfo;
import org.chromium.android_webview.nonembedded.crash.CrashInfo.UploadState;
import org.chromium.components.minidump_uploader.CrashFileManager;

import java.io.File;
import java.util.ArrayList;
import java.util.List;

/**
 * Gets crashes info about unuploaded minidump files in crash directory.
 * Minidump file name contains information about the upload state of the file, its local id and
 * number of trials of upload for that report.
 */
public class UnuploadedFilesStateLoader extends CrashInfoLoader {
    private final CrashFileManager mCrashFileManager;

    /** @param crashDir the directory where WebView stores crash reports files. */
    public UnuploadedFilesStateLoader(CrashFileManager crashFileManager) {
        mCrashFileManager = crashFileManager;
    }

    /**
     * Get info about unuploaded crash reports and their state.
     * Uses file suffixes to get the upload state of a crash report. For more about crash files
     * suffixes see docs for {@link CrashFileManager}.
     *
     * @return list of crashes info.
     */
    @Override
    public List<CrashInfo> loadCrashesInfo() {
        List<CrashInfo> crashes = new ArrayList<>();

        for (File file : mCrashFileManager.getMinidumpsNotForcedReadyForUpload()) {
            addCrashInfoIfValid(crashes, file.getName(), UploadState.PENDING);
        }

        for (File file : mCrashFileManager.getMinidumpsForcedUpload()) {
            addCrashInfoIfValid(crashes, file.getName(), UploadState.PENDING_USER_REQUESTED);
        }

        for (File file : mCrashFileManager.getMinidumpsSkippedUpload()) {
            addCrashInfoIfValid(crashes, file.getName(), UploadState.SKIPPED);
        }

        return crashes;
    }

    private void addCrashInfoIfValid(
            List<CrashInfo> crashesList, String fileName, UploadState state) {
        String localId = CrashFileManager.getCrashLocalIdFromFileName(fileName);
        if (localId != null) {
            CrashInfo crashInfo = new CrashInfo(localId);
            crashInfo.uploadState = state;
            crashesList.add(crashInfo);
        }
    }
}
