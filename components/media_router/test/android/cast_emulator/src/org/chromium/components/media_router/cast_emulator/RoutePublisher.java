// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: RoutePublisher interface for the cast emulator
// summary: Interface for publishing media routes (sinks) and creating route controllers for a given control category, discovery request, or route id in the cast emulator.
// ---

package org.chromium.components.media_router.cast_emulator;

import androidx.mediarouter.media.MediaRouteProvider;

/**
 * RoutePublisher interface, which is used to publish routes (sinks) and create {@link
 * RouteController} for a specific kind of {@link MediaRouteDiscoveryRequest} / route id.
 */
public interface RoutePublisher {
    /** @return Whether the publisher supports the given control category. */
    boolean supportsControlCategory(String controlCategory);

    /** Publish routes (sinks). */
    void publishRoutes();

    /**
     * @return Whether the publisher supports the given route.
     */
    boolean supportsRoute(String routeId);

    /**
     * @return A {@link RouteController} created for {@link routeId}.
     */
    MediaRouteProvider.RouteController onCreateRouteController(String routeId);
}
