---
name: general/scope-lint-ifchange-to-target-definition
rubric: readability
severity: should_fix
type: reference
title: Scope LINT.IfChange to target definition
summary: Coding rule requiring LINT.IfChange and LINT.ThenChange synchronization guards, scoped tightly to the synchronized fields or assertions, instead of informal keep-in-sync comments.
relations:
  - references /build/android/pylib/local/machine/local_machine_junit_test_run.py
---

**Rule.** When values, constants, enums, configurations, or ABI layouts across
multiple files or languages must remain synchronized, use `LINT.IfChange` and
`LINT.ThenChange` synchronization guards rather than informal 'keep in sync'
comments so that presubmit checks automatically enforce synchronization. Scope
the guards tightly around the specific field set, enum, or ABI layout
`static_assert` statements being synchronized rather than wrapping enclosing
messages, classes, structs, or namespaces.

**Why.** Informal 'keep in sync' comments rely purely on manual inspection and
are easily overlooked during edits, leading to silent drift. LINT.IfChange and
LINT.ThenChange enable presubmit linters and Gerrit to detect changes and
require matching updates in dependent files, while tight scoping (such as
guarding only layout static_asserts or inner enums) avoids false-positive
presubmit warnings when editing unrelated methods, constants, or comments in
enclosing classes or structs.

## Examples

Bad:

```cpp
// Bad: Informal comment relying on manual inspection
// These values must be kept in sync with local_machine_junit_test_run.py.
public static final int MIN_SDK = 29;

// Bad: Scoping guards around the outer enclosing struct rather than layout assertions
// LINT.IfChange(FeatureStruct)
struct BASE_EXPORT Feature {
  static void AssertABI() {
    static_assert(sizeof(Feature) == (sizeof(void*) == 8 ? 16 : 12));
    static_assert(offsetof(Feature, name) == 0);
  }
};
// LINT.ThenChange(feature.rs:FeatureStruct)
```

Good:

```cpp
// Good: LINT.IfChange / LINT.ThenChange guards enforce synchronization
// LINT.IfChange(RobolectricSdk)
public static final int MIN_SDK = 29;
// LINT.ThenChange(//build/android/pylib/local/machine/local_machine_junit_test_run.py:RobolectricSdk)

// Good: Guards scoped tightly to layout assertions rather than outer struct
// LINT.IfChange(FeatureStructGood)
static_assert(sizeof(Feature) == (sizeof(void*) == 8 ? 16 : 12));
static_assert(alignof(Feature) == alignof(void*));
static_assert(offsetof(Feature, name) == 0);
// LINT.ThenChange(feature.rs:FeatureStructGood)
```
