// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: XrModuleProviderImpl provider for XR SceneCore sessions
// summary: Registers the XR factory, supplies XR SceneCore session managers and initializers, and creates the immersive video playback activity.
// ---

package org.chromium.chrome.browser.xr.scenecore;

import android.app.Activity;
import android.os.Build;

import androidx.annotation.RequiresApi;

import org.chromium.base.UnguessableToken;
import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.lifecycle.ActivityLifecycleDispatcher;
import org.chromium.chrome.browser.media.immersive_playback.ImmersiveVideoPlaybackActivity;
import org.chromium.ui.xr.scenecore.XrFactory;
import org.chromium.ui.xr.scenecore.XrSceneCoreSessionInitializer;
import org.chromium.ui.xr.scenecore.XrSceneCoreSessionManager;

/** Implementation of {@link XrModuleProvider}. */
@NullMarked
public class XrModuleProviderImpl implements XrModuleProvider {
    public XrModuleProviderImpl() {
        initialize();
    }

    public static void initialize() {
        XrFactory.Holder.set(new XrFactoryImpl());
    }

    @Override
    @RequiresApi(Build.VERSION_CODES.UPSIDE_DOWN_CAKE)
    public XrSceneCoreSessionManager getXrSceneCoreSessionManager(Activity activity) {
        return new XrSceneCoreSessionManagerImpl(activity);
    }

    @Override
    public XrSceneCoreSessionInitializer getXrSceneCoreSessionInitializer(
            ActivityLifecycleDispatcher dispatcher, XrSceneCoreSessionManager manager) {
        return new XrSceneCoreSessionInitializerImpl(dispatcher, manager);
    }

    @Override
    public void createImmersiveVideoPlaybackActivity(
            UnguessableToken nativeToken, Object initiatorTab) {
        ImmersiveVideoPlaybackActivity.createActivity(nativeToken, initiatorTab);
    }
}
