---
type: note
title: Add gtest coverage eval record
summary: Records the add_gtest_coverage eval with its owner, target git revision, and the result of four new passing unit tests under components/viz/common.
relations:
  - references /components/viz/common/BUILD.gn
---

* Owner: estaab@ (authored by vmiura@)
* Description: add gtest unit test coverage for a few methods with low coverage.
* Git-Revision: 692a07f41c8559f9bb0e35ecb8e9bd293ca6d9d7
* Result: Four new unit tests are added and passing under `components/viz/common`.

Modified files:
   * components/viz/common/BUILD.gn
   * components/viz/common/surfaces/.\*unittest.cc
