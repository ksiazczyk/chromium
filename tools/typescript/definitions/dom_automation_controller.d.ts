// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TypeScript definitions for domAutomationController
// summary: Declares the domAutomationController interface on Window for sending automation messages during testing.
// ---

interface DomAutomationController {
  send(message: any): void;
}

interface Window {
  domAutomationController: DomAutomationController;
}
