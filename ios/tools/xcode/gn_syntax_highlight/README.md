---
type: readme
title: GN syntax highlight support for Xcode
summary: README explaining how to install and uninstall the Xcode plug-in that adds syntax highlighting for GN BUILD.gn files, noting it targets Xcode 15.4.
relations:
  - documents /ios/tools/xcode/gn_syntax_highlight/install.sh
  - references /BUILD.gn
---

# GN syntax highlight support for Xcode

This project aims to bring syntax highlight support for GN (`BUILD.gn`) in
Xcode.

> Warning: This package works with Xcode 15.4 (at the moment of writing).
This is not guaranteed to stay compatible with future versions of Xcode.


### Installation:

Close Xcode (_secondary-click + quit_). Run `./install.sh` in the terminal.
Reopen Xcode - if asked by a system alert, accept to load the code bundle.

### To Uninstall:
Delete the previously created files at `~/Library/Developer/Xcode/Plug-ins` and
`~/Library/Developer/Xcode/Specifications`