// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// The <extensionoptions> custom element.

// ---docerion
// type: source
// title: Custom element registration for extensionoptions
// summary: Registers the <extensionoptions> custom element as ExtensionOptionsElement, extending the shared guest view container element class.
// ---

var registerElement = require('guestViewContainerElement').registerElement;
var GuestViewContainerElement =
    require('guestViewContainerElement').GuestViewContainerElement;
var ExtensionOptionsImpl = require('extensionOptions').ExtensionOptionsImpl;
var ExtensionOptionsConstants =
    require('extensionOptionsConstants').ExtensionOptionsConstants;

class ExtensionOptionsElement extends GuestViewContainerElement {
  static get observedAttributes() {
    return [ExtensionOptionsConstants.ATTRIBUTE_EXTENSION];
  }

  constructor() {
    super();
    privates(this).internal = new ExtensionOptionsImpl(this);
  }
}

registerElement(
    'ExtensionOptions', 'ExtensionOptions', ExtensionOptionsElement);
