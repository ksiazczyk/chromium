// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FaceDetectionProviderImpl.java
// summary: Provider that binds FaceDetection requests to the Google Play Services implementation when available, otherwise to the Android media FaceDetector implementation.
// ---

package org.chromium.shape_detection;
import org.chromium.build.annotations.NullMarked;

import org.chromium.base.ContextUtils;
import org.chromium.gms.ChromiumPlayServicesAvailability;
import org.chromium.mojo.bindings.InterfaceRequest;
import org.chromium.mojo.system.MojoException;
import org.chromium.shape_detection.mojom.FaceDetection;
import org.chromium.shape_detection.mojom.FaceDetectionProvider;
import org.chromium.shape_detection.mojom.FaceDetectorOptions;

/** Service provider to create FaceDetection services */
@NullMarked
public class FaceDetectionProviderImpl implements FaceDetectionProvider {
    public FaceDetectionProviderImpl() {}

    @Override
    public void createFaceDetection(
            InterfaceRequest<FaceDetection> request, FaceDetectorOptions options) {
        final boolean isGmsCoreSupported =
                ChromiumPlayServicesAvailability.isGooglePlayServicesAvailable(
                        ContextUtils.getApplicationContext());

        if (isGmsCoreSupported) {
            FaceDetection.MANAGER.bind(new FaceDetectionImplGmsCore(options), request);
        } else {
            FaceDetection.MANAGER.bind(new FaceDetectionImpl(options), request);
        }
    }

    @Override
    public void close() {}

    @Override
    public void onConnectionError(MojoException e) {}
}
