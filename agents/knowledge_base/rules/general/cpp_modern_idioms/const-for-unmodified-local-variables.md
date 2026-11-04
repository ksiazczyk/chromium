---
name: general/const-for-unmodified-local-variables
rubric: readability
severity: nit
type: reference
title: Const for Unmodified Local Variables
summary: Coding rule advising const for local variables whose values never change after initialization, with examples.
---

**Rule.** Declare local variables as const when their values are not modified
after initialization. Marking unmodified local variables as const documents that
the variable represents an immutable value rather than varying state.

**Why.** Explicit const on local variables clarifies intent, prevents accidental
reassignment or unintended mutation, and makes local data flow easier to follow.

## Examples

Bad:

```cpp
size_t modules_count = std::min<size_t>(kSize, returned);
```

Good:

```cpp
const size_t modules_count =
    std::min<size_t>(kSize, returned / sizeof(HMODULE));
```
