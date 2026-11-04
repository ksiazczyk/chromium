// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Skills empty state element
// summary: Lit element that renders the skills empty state illustration as the skills-empty custom element.
// ---

import {CrLitElement} from 'chrome://resources/lit/v3_0/lit.rollup.js';

import {getHtml} from './skills_empty.html.js';

export class SkillsEmptyElement extends CrLitElement {
  static get is() {
    return 'skills-empty';
  }

  override render() {
    return getHtml.bind(this)();
  }
}

declare global {
  interface HTMLElementTagNameMap {
    'skills-empty': SkillsEmptyElement;
  }
}

customElements.define(SkillsEmptyElement.is, SkillsEmptyElement);
