---
name: general/colocate-fuzztest-with-unit-tests
rubric: readability
severity: nit
type: guide
title: Colocate FuzzTest with Unit Tests
summary: Rule advising that FuzzTest fuzz tests be defined inside existing *_unittest.cc files rather than in separate fuzztest files or targets, with Chromium-specific examples.
relations:
  - references /BUILD.gn
---

**Rule.** When adding FuzzTest fuzz tests to an existing test suite, define the
property functions and `FUZZ_TEST` macros directly inside the corresponding
`*_unittest.cc` file rather than creating separate `*_fuzztest.cc` files or
targets.

**Why.** FuzzTests in Chromium are property-based unit tests that share the same
fixtures, dependencies, and test targets as standard unit tests. Defining them
directly in `*_unittest.cc` avoids test file proliferation and keeps related
unit and fuzz testing logic co-located.

## Examples

Bad:

```cpp
// BUILD.gn
test("my_component_unittests") {
  sources = [
    "my_component_unittest.cc",
    "my_component_fuzztest.cc",  // Avoid creating separate files for FuzzTests
  ]
  fuzztests = [ "MyApiTest.MyApiCanSuccessfullyParseAnyString" ]
}
```

Good:

```cpp
// my_component_unittest.cc
#include "third_party/fuzztest/src/fuzztest/fuzztest.h"

void MyApiCanSuccessfullyParseAnyString(std::string input) {
  EXPECT_TRUE(MyApi(input));
}
FUZZ_TEST(MyApiTest, MyApiCanSuccessfullyParseAnyString);
```
