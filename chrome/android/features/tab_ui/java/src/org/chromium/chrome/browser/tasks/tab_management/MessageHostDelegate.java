// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Interface for message host delegates
// summary: Interface for a UI component that registers message services and manages the lifecycle and display of their messages.
// ---

package org.chromium.chrome.browser.tasks.tab_management;

import org.chromium.build.annotations.NullMarked;

/**
 * An interface for a UI component that hosts and manages the lifecycle of messages. The host is
 * also responsible for displaying the UI.
 *
 * @param <MessageT> The message type.
 * @param <UiT> The UI type.
 */
@NullMarked
public interface MessageHostDelegate<MessageT, UiT> {
    /**
     * Registers a {@link MessageService} with the delegate.
     *
     * @param service The message service to register.
     */
    void registerService(MessageService<MessageT, UiT> service);
}
