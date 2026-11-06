// ---docerion
// type: test
// title: Expected multi-bundle output foo_ui_multi_bundle.rollup.js
// summary: Expected output for a multi-bundle foo UI build that imports the shared chunk and inlines the remaining module alerts.
// ---

import './shared.rollup.js';

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
