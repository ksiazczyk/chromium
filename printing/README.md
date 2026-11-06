---
type: readme
title: Printing directory README
summary: Explains that //printing holds foundational printing code and may only depend on low-level directories.
---

`//printing` contains foundational code that is used for printing. It can depend
on other low-level directories like `//cc/paint` and `//ui`, but not higher
level code like `//components` or `//content`. Higher level printing code should
live in `//components/printing` or the embedder.
