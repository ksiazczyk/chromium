// ---docerion
// type: test
// title: Expected bundle with excludes foo_ui_excludes.rollup.js
// summary: Expected bundle output for foo UI where excluded modules remain as import statements while the remaining modules are inlined.
// ---

import './foo.js';

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

alert('Hello from resources/foo_untrusted.js');

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

alert('Hello from resources/bar_resource.js');

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


alert('Hello from src/subdir/baz.js');
//# sourceMappingURL=foo_ui.rollup.js.map
