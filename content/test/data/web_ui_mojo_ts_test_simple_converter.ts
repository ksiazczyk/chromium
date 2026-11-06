// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebUI Mojo TS test simple type converter
// summary: Implements a simple string mapped type converter for the WebUI Mojo TypeScript tests.
// ---

import {SimpleMappedTypeDataView, SimpleMappedTypeTypeMapper} from './web_ui_ts_test.test-mojom-converters.js';

export class SimpleTypeConverter implements SimpleMappedTypeTypeMapper<string> {
  value(mappedType: string): string {
    return mappedType;
  }

  convert(dataView: SimpleMappedTypeDataView): string {
    return dataView.value;
  }
}
