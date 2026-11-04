// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: No-op default PlatformServiceBridge implementation
// summary: Default do-nothing implementation of PlatformServiceBridge, used when no platform-specific service implementation is provided.
// ---

package org.chromium.android_webview.common;

/**
 * The default implementation of {@link PlatformServiceBridge}.
 *
 * <p>This can be overridden by defining a service implementation for {@link PlatformServiceBridge}.
 */
public class NoOpPlatformServiceBridge extends PlatformServiceBridge {}
