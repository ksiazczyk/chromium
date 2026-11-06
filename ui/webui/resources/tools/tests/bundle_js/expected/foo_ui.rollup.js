// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Expected bundle output foo_ui.rollup.js
// summary: Expected bundle output for the foo UI entry point, inlining all resource, external, and src module alerts with a source map reference.
// ---

alert('Hello from resources/foo_untrusted.js');

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

alert('Hello from resources/bar_resource.js');

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
