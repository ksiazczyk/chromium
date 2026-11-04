---
name: general/const-for-immutable-member-variables
rubric: readability
severity: nit
type: reference
title: Const for Immutable Member Variables
summary: Coding rule advising const declaration for class members initialized at construction and never mutated, with examples.
---

**Rule.** Declare class data members as const when their values are initialized
at construction and never mutated throughout the lifetime of the object, unless
copy or move assignment is required for the class.

**Why.** Declaring immutable data members const communicates intent, enforces
const-correctness at compile time, and prevents accidental reassignment or
mutation after initialization.

## Examples

Bad:

```cpp
class ActiveCollection {
 private:
  const TimeDelta sampling_duration_;
  TimeTicks collection_end_time_;
};
```

Good:

```cpp
class ActiveCollection {
 private:
  const TimeDelta sampling_duration_;
  const TimeTicks collection_end_time_;
};
```
