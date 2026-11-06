// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: A11y announce interface
// summary: Defines an interface for announcing already-translated messages to screen readers in the Files app.
// ---

export interface A11yAnnounce {
  /**
   * @param text Text to be announced by screen reader, which should be already
   * translated.
   */
  speakA11yMessage(text: string): void;
}
