---
name: general/avoid-redundant-assertions-on-initialized-test-variables
rubric: readability
severity: nit
type: reference
title: Avoid Redundant Assertions on Initialized Test Variables
summary: Unit test rule advising against assertions that re-verify freshly initialized local variables before the code under test runs, with bad and good C++ examples.
---

**Rule.** In unit tests, do not add redundant assertions verifying that a
freshly declared and initialized or assigned local test variable holds its
initial value before any code under test executes. Rely on standard language
initialization and assert states only after exercising the production code,
callback, or lifecycle transition under test.

**Why.** Asserting that a freshly initialized local variable matches the literal
value it was just assigned is tautological and verifies language semantics
rather than system behavior. Omitting these redundant pre-assertions reduces
visual noise and keeps unit tests focused on verifying actual state mutations
and side effects.

## Examples

Bad:

```cpp
bool was_destroyed = false;
EXPECT_FALSE(was_destroyed);

base::RepeatingCallback<void(int)> cb =
    base::DoNothingWithBoundArgs(DestructionObserver{.was_destroyed = &was_destroyed});
```

Good:

```cpp
bool was_destroyed = false;
base::RepeatingCallback<void(int)> cb =
    base::DoNothingWithBoundArgs(DestructionObserver{.was_destroyed = &was_destroyed});
```
