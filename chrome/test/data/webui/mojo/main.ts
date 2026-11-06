// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script exposing Foo, Bar and Baz interfaces
// summary: Exposes the Foo, Bar and Baz Mojo interfaces on window so browser tests can reach them via EvalJs.
// ---

import {Bar, Baz, Foo} from './foobar.mojom-webui.js';

// Expose the interface for browsertest EvalJs.
Object.assign(window, {Foo, Bar, Baz});
