// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Permission type index type
// summary: Exports a TypeScript type alias for indexing permission types from the generated Mojom bindings.
// ---

import type {PermissionType} from './app_management.mojom-webui.js';

export type PermissionTypeIndex = keyof typeof PermissionType;
