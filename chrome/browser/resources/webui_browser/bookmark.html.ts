// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HTML template for the bookmark element
// summary: Lit HTML template rendering a bookmark item with either a folder icon or a favicon plus its title.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {BookmarkElement} from './bookmark.js';
import {BookmarkType} from './bookmark_bar.mojom-webui.js';

export function getHtml(this: BookmarkElement) {
  return html`
<div class="bookmark">
  <div id="faviconContainer">
    ${this.data.type === BookmarkType.FOLDER ? html`
      <cr-icon id="folderIcon" icon="webui-browser:folder"></cr-icon>
    ` : html`
      <div id="favicon"></div>
    `}
  </div>
  <span class="bookmarkTitle">${this.data.title}</span>
</div>`;
}
