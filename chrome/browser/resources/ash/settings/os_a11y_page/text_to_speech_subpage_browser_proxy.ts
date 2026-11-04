// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Text-to-speech subpage browser proxy
// summary: Browser proxy for the text-to-speech subpage that opens the ChromeVox tutorial via chrome.send.
// ---

export interface TextToSpeechSubpageBrowserProxy {
  /**
   * Opens the ChromeVox tutorial.
   */
  showChromeVoxTutorial(): void;
}

let instance: TextToSpeechSubpageBrowserProxy|null = null;

export class TextToSpeechSubpageBrowserProxyImpl implements
    TextToSpeechSubpageBrowserProxy {
  static getInstance(): TextToSpeechSubpageBrowserProxy {
    return instance || (instance = new TextToSpeechSubpageBrowserProxyImpl());
  }

  static setInstanceForTesting(obj: TextToSpeechSubpageBrowserProxy): void {
    instance = obj;
  }

  showChromeVoxTutorial(): void {
    chrome.send('showChromeVoxTutorial');
  }
}
