// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dummy test config with module resolution plugin
// summary: Test configuration exporting a plugin that resolves the dummy module id bar/bar.js to a local source file for bundle_js tests.
// ---

import * as path from 'path';
import * as url from 'url';

function plugin() {
  // The absoslute path of the directory where the current file resides.
  const hereDir = url.fileURLToPath(new URL('.', import.meta.url));

  return {
    name: 'dummy-test-plugin',
    resolveId(source, origin) {
      if (source === 'bar/bar.js') {
        return path.join(hereDir, 'src/bar.js');
      }

      return null;
    },
  };
}

export default ({
  plugins: [plugin()],
});
