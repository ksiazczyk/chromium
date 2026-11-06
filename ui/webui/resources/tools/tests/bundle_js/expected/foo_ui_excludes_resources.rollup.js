// ---docerion
// type: test
// title: Expected bundle with resource excludes foo_ui_excludes_resources.rollup.js
// summary: Expected bundle output for foo UI where chrome-untrusted and resource imports are excluded and preserved as import statements.
// ---

import 'chrome-untrusted://resources/foo_untrusted.js';
import '//resources/bar_resource.js';

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


alert('Hello from src/subdir/baz.js');

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

alert('Hello from resources/foo_resource.js');

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

alert('Hello from external/bar/bar.js');

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

alert('Hello from external/foo/foo.js');

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

alert('Hello from external/baz/baz.js');

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


alert('Hello from src/foo.js');
//# sourceMappingURL=foo_ui.rollup.js.map
