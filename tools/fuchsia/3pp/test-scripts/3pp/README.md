---
type: readme
title: 3pp definition of build/fuchsia test scripts
summary: Explains why the 3pp definition for build/fuchsia test scripts is placed in this directory instead of the build repo, to avoid duplicate 3pp file errors.
---

### [3pp definition of build/fuchsia test scripts]

//build/ is an own repo (https://chromium.googlesource.com/chromium/src/build)
which can be easily double-referred as a submodule. 3pp currently raises an
error if a 3pp file is duplicated, see https://crrev.com/c/4658885. So instead
of using //build/fuchsia/, place the 3pp file here to avoid the error.
