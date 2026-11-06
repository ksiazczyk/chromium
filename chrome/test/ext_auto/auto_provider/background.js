// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Automation provider background entry point
// summary: Starts the automation server when the test extension's background page loads.
// ---

// Kick off web server.
AutomationServer.getInstance().start();