// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ArTestRule interface for AR test rules
// summary: Marker interface implemented by AR test rules, extending XrTestRule so AR-specific rules can be identified.
// ---

package org.chromium.chrome.browser.vr.rules;

/**
 * Interface to be implemented by *ArTestRule rules.
 *
 * <p>Does not currently actually do anything other than make it possible to check that a given rule
 * is AR-specific.
 */
public interface ArTestRule extends XrTestRule {}
