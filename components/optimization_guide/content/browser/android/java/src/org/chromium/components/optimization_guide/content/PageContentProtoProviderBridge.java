// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PageContentProtoProviderBridge
// summary: Java JNI bridge that requests AI page content from native code and parses the returned bytes into an AnnotatedPageContent proto, passing null on empty or invalid results.
// ---

package org.chromium.components.optimization_guide.content;

import com.google.protobuf.InvalidProtocolBufferException;

import org.jni_zero.JNINamespace;
import org.jni_zero.JniType;
import org.jni_zero.NativeMethods;

import org.chromium.base.Callback;
import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.components.optimization_guide.features.proto.CommonFeatureDataProto.AnnotatedPageContent;
import org.chromium.content_public.browser.WebContents;

@JNINamespace("optimization_guide::android")
@NullMarked
public class PageContentProtoProviderBridge {

    public static void getAiPageContent(
            WebContents webContents, Callback<@Nullable AnnotatedPageContent> callback) {
        PageContentProtoProviderBridgeJni.get()
                .getAiPageContent(
                        webContents,
                        new Callback<byte[]>() {
                            @Override
                            public void onResult(byte[] result) {
                                if (result.length == 0) {
                                    callback.onResult(null);
                                    return;
                                }

                                try {
                                    AnnotatedPageContent proto =
                                            AnnotatedPageContent.parseFrom(result);
                                    callback.onResult(proto);
                                } catch (InvalidProtocolBufferException e) {
                                    callback.onResult(null);
                                }
                            }
                        });
    }

    @NativeMethods
    public interface Natives {
        void getAiPageContent(
                @JniType("content::WebContents*") WebContents webContents,
                Callback<byte[]> callback);
    }
}
