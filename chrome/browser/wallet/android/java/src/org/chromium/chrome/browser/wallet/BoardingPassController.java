// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BoardingPassController
// summary: Controller that observes tab page loads and triggers boarding pass detection via the bridge when the URL qualifies.
// ---

package org.chromium.chrome.browser.wallet;

import org.chromium.base.Log;
import org.chromium.base.supplier.NullableObservableSupplier;
import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.tab.CurrentTabObserver;
import org.chromium.chrome.browser.tab.Tab;
import org.chromium.chrome.browser.tab.TabObserver;
import org.chromium.url.GURL;

import java.util.List;

/** Controls the whole flow of boarding pass detection. */
@NullMarked
public class BoardingPassController {
    private static final String TAG = "BoardingPassCtrl";

    private final TabObserver mTabObserver;
    private final CurrentTabObserver mCurrentTabObserver;

    public BoardingPassController(NullableObservableSupplier<Tab> tabSupplier) {
        mTabObserver = createTabObserver();
        mCurrentTabObserver = new CurrentTabObserver(tabSupplier, mTabObserver);
    }

    private TabObserver createTabObserver() {
        return new TabObserver() {
            @Override
            public void onPageLoadFinished(Tab tab, GURL url) {
                if (BoardingPassBridge.shouldDetect(url.getSpec())) {
                    BoardingPassBridge.detectBoardingPass(tab.getWebContents())
                            .then(
                                    (List<String> passes) ->
                                            Log.d(TAG, "Detected boarding passes: %s", passes));
                }
            }
        };
    }

    public void destroy() {
        mCurrentTabObserver.destroy();
    }
}
