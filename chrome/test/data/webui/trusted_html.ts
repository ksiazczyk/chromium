// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Provides a way to create TrustedHTML for HTML code that is
 * injected during tests and can't leverage
 * ui/webui/resources/js/static_types.ts because the HTML is not fully static.
 */

// ---docerion
// type: test
// title: TrustedHTML helper for WebUI tests
// summary: Creates TrustedHTML via a test-only trusted types policy for non-static HTML injected during WebUI tests, not for production use.
// ---

let policy: TrustedTypePolicy|null = null;

export function getTrustedHtml(html: string): TrustedHTML {
  if (policy === null) {
    policy = window.trustedTypes!.createPolicy('webui-test-html', {
      // Policy only used in test code, no need for any sanitization. DO NOT use
      // in prod code.
      createHTML: html => html,
      createScriptURL: () => '',
      createScript: () => '',
    });
  }

  return policy.createHTML(html);
}
