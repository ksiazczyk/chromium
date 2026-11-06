// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This module implements the attributes of the <extensionoptions> tag.

// ---docerion
// type: source
// title: Attributes of the extensionoptions element
// summary: Defines the attributes of the <extensionoptions> tag, including the extension attribute that binds an extension and triggers guest creation when set.
// ---

var GuestViewAttributes = require('guestViewAttributes').GuestViewAttributes;
var ExtensionOptionsConstants =
    require('extensionOptionsConstants').ExtensionOptionsConstants;

// -----------------------------------------------------------------------------
// ExtensionAttribute object.

// Attribute that handles extension binded to the extensionoptions.
function ExtensionAttribute(view) {
  $Function.call(
      GuestViewAttributes.Attribute, this,
      ExtensionOptionsConstants.ATTRIBUTE_EXTENSION, view);
}

ExtensionAttribute.prototype.__proto__ =
    GuestViewAttributes.Attribute.prototype;

ExtensionAttribute.prototype.handleMutation = function(oldValue, newValue) {
  // Once this attribute has been set, it cannot be unset.
  if (!newValue && oldValue) {
    this.setValueIgnoreMutation(oldValue);
    return;
  }

  if (!newValue || !this.elementAttached) {
    return;
  }

  this.view.createGuest();
};

var ExtensionOptionsAttributes = {ExtensionAttribute: ExtensionAttribute};

// Exports.
exports.$set('ExtensionOptionsAttributes', ExtensionOptionsAttributes);
