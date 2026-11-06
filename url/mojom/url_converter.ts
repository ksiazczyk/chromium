// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Url Mojo TypeScript converter
// summary: TypeScript converter implementing UrlTypeMapper to convert between the Mojo Url data view and a plain URL string.
// ---

import type {UrlDataView, UrlTypeMapper} from './url.mojom-converters.js';

export class UrlConverter implements UrlTypeMapper<string> {
  url(url: string): string {
    return url;
  }

  convert(view: UrlDataView): string {
    return view.url;
  }
}
