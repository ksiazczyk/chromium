// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Username autofill helper for IdP login pages
// summary: Appends the user's email to a supported HTTPS identity provider login URL so the username field can be autofilled during SAML login.
// ---

/**
 * Try to autofill email on login page for supported identity providers
 * @param {string} urlAsString Url of IdP login page
 * @param {?string} urlParameterNameToAutofillUsername Url parameter name
 *     which can be used to autofill the username field
 * @param {?string} email User's email which is to be used as a username on
 *     IdP login page
 * @return {?string} Modified url which can autofill the username field, or
 *     null.
 */
export function maybeAutofillUsername(
    urlAsString, urlParameterNameToAutofillUsername, email) {
  if (!urlParameterNameToAutofillUsername ||
      urlParameterNameToAutofillUsername.length === 0) {
    return null;
  }
  const url = new URL(urlAsString);
  if (url.protocol !== 'https:') {
    return null;
  }
  if (!email) {
    return null;
  }
  // Don't do anything if url already contains parameter with a name
  // `urlParameterNameToAutofillUsername`.
  if (url.searchParams.has(urlParameterNameToAutofillUsername)) {
    return null;
  }

  url.searchParams.append(urlParameterNameToAutofillUsername, email);
  return url.href;
}
