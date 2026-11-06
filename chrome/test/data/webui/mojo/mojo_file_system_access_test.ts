// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: FileSystemAccess test interface exposure script
// summary: Exposes the MojoFileSystemAccessTest interface on window so browser tests can call it via EvalJs.
// ---

import {MojoFileSystemAccessTest} from './mojo_file_system_access_test.mojom-webui.js';

// Expose the interface for browsertest EvalJs.
Object.assign(window, {MojoFileSystemAccessTest});
