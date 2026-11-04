---
name: general/preserve-subsystem-qualifiers-in-target-names
rubric: readability
severity: should_fix
type: guide
title: Preserve subsystem qualifiers in target names
summary: Rule against giving build targets or test suites overly generic names when they cover a specific subsystem, preserving qualifying prefixes such as jni_ or mojo_.
relations:
  - references /base/android/junit/src/org/chromium/base/JniCallbacksTest.java
---

**Rule.** Do not give build targets or test suites overly broad or generic names
when their sources only test or implement a specific subsystem or mechanism;
preserve qualifying prefixes (such as `jni_` or `mojo_`) that accurately
describe their scope.

**Why.** Overly generic build target names (such as `callbacks_junit_tests_java`
for a target containing only `JniCallbacksTest.java`) misleadingly imply that
the target covers general utilities rather than a specific subsystem. Retaining
qualifying prefixes prevents confusion regarding test suite scope and ensures
clear boundaries between generic utilities and subsystem-specific
implementations.

## Examples

Bad:

```cpp
robolectric_library("callbacks_junit_tests_java") {
  testonly = true
  sources = [ "android/junit/src/org/chromium/base/JniCallbacksTest.java" ]
  deps = [
    ":base_java",
    "//third_party/jni_zero:jni_zero_java",
    "//third_party/junit",
  ]
}
```

Good:

```cpp
robolectric_library("jni_callbacks_junit_tests_java") {
  testonly = true
  sources = [ "android/junit/src/org/chromium/base/JniCallbacksTest.java" ]
  deps = [
    ":base_java",
    "//third_party/jni_zero:jni_zero_java",
    "//third_party/junit",
  ]
}
```
