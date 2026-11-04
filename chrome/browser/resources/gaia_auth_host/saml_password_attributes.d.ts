// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Type declarations for SAML password attributes
// summary: Declares the PasswordAttributes class with modified time, expiration time and password change URL fields used by the SAML password handling code.
// ---

export class PasswordAttributes {
  modifiedTime: string;
  expirationTime: string;
  passwordChangeUrl: string;
}
