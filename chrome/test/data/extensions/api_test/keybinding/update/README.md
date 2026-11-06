---
type: readme
title: Keybinding update test extension versions
summary: Describes the subdirectory naming convention for extension versions used to test command shortcut handling during extension updates in browser tests.
relations:
  - references /chrome/browser/extensions/extension_keybinding_browsertest.cc
---

This directory contains different versions of extensions used to test the
behavior of command shortcuts when an extension is updated.

The naming convention for the subdirectories is as follows:

- `v1*`: Represents version 1 of an extension.
- `v2*`: Represents version 2 of an extension.

The suffixes indicate the state of the keybinding in the manifest:
- `_unassigned`: The command is declared, but no keybinding is assigned.
- `_reassigned`: The keybinding for a command has been changed from the
previous version.
- No suffix (e.g., `v1`, `v2`): A standard keybinding is assigned.

These extensions are used in tests like `ShortcutAddedOnUpdate`,
`ShortcutChangedOnUpdate`, and `ShortcutRemovedOnUpdate` in
`extension_keybinding_browsertest.cc` to ensure that command shortcuts are
correctly handled during extension updates.