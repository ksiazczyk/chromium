// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Copies files from argv[1] to argv[2]

// ---docerion
// type: source
// title: Mac web app shortcut copier main entry point
// summary: Entry point for the Mac web app shortcut copier helper, delegating to ChromeWebAppShortcutCopierMain to copy files given on the command line.
// ---

extern "C" int ChromeWebAppShortcutCopierMain(int argc, char** argv);

int main(int argc, char** argv) {
  return ChromeWebAppShortcutCopierMain(argc, argv);
}
