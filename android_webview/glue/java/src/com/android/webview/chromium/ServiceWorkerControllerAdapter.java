// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ServiceWorkerControllerAdapter – Chromium service worker controller
// summary: Chromium implementation of android.webkit.ServiceWorkerController that forwards settings and client calls to the internal AwServiceWorkerController.
// relations:
//   - depends_on /android_webview/java/src/org/chromium/android_webview/AwServiceWorkerController.java
// ---

package com.android.webview.chromium;

import android.webkit.ServiceWorkerClient;
import android.webkit.ServiceWorkerController;
import android.webkit.ServiceWorkerWebSettings;

import androidx.annotation.Nullable;

import org.chromium.android_webview.AwServiceWorkerController;

/**
 * Chromium implementation of ServiceWorkerController -- forwards calls to
 * the chromium internal implementation.
 */
public class ServiceWorkerControllerAdapter extends ServiceWorkerController {
    private final AwServiceWorkerController mAwServiceWorkerController;

    public ServiceWorkerControllerAdapter(AwServiceWorkerController controller) {
        mAwServiceWorkerController = controller;
    }

    /** Sets the settings for all service workers. */
    @Override
    public ServiceWorkerWebSettings getServiceWorkerWebSettings() {
        return new ServiceWorkerSettingsAdapter(
                mAwServiceWorkerController.getAwServiceWorkerSettings());
    }

    /** Sets the client to capture service worker related callbacks. */
    @Override
    public void setServiceWorkerClient(@Nullable ServiceWorkerClient client) {
        mAwServiceWorkerController.setServiceWorkerClient(
                client != null ? new ServiceWorkerClientAdapter(client) : null);
    }
}
