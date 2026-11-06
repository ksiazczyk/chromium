---
type: guide
title: Deploying content_shell and running web tests on Fuchsia
summary: Explains how to deploy content_shell and run web tests on Fuchsia, either in hermetic emulation or on a physical device, via the Fuchsia test script.
relations:
  - references /build/fuchsia/test/run_test.py
  - references /docs/testing/web_tests.md
  - references /third_party/blink/tools/blinkpy/web_tests/run_web_tests.py
---

# Deploying content_shell and running web_tests on Fuchsia

[TOC]

General instruction on running and debugging web_tests can be found
[here](../testing/web_tests.md).

Unlike on other platforms, where tests are directly invoked via the
[blink test script](../../third_party/blink/tools/blinkpy/web_tests/run_web_tests.py),
Fuchsia layers on top [its own test script](../../build/fuchsia/test/run_test.py),
which handles preparation such as installing the content_shell binary.

Currently, only
[a small subset of web tests](../../third_party/blink/web_tests/TestLists/Default.txt)
can be run on Fuchsia. Build the target `blink_web_tests` first before running any
of the commands below:

## Hermetic emulation

The test script brings up an emulator, runs the tests on it, and shuts the
emulator down when finished.
```bash
$ <output-dir>/bin/run_blink_web_tests
```

## Run on an physical device.

```bash
$ <output-dir>/bin/run_blink_web_tests --target-id=<device-target-id>
```
