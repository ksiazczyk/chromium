---
type: readme
title: Tests for tools/licenses.py
summary: Describes the tests covering tools/licenses.py, pointing to the goldens-based integration test and the end-to-end unittest of IDR_ABOUT_UI_CREDITS_HTML.
relations:
  - documents /tools/licenses/tests/integration_test.py
  - documents /tools/licenses/licenses.py
---

Tests covering `tools/licenses.py`:

* `tools/licenses/tests/integration_test.py`:
  goldens-based verification of `licenses.py` output
  (using mock repo under `tools/licenses/tests/mock_root`)
* `components/resources/unittests.cc`:
  end-to-end verification of actual contents of `IDR_ABOUT_UI_CREDITS_HTML`
