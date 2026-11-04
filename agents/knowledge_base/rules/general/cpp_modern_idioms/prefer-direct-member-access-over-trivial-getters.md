---
name: general/prefer-direct-member-access-over-trivial-getters
rubric: readability
severity: nit
type: guide
title: Prefer direct member access over trivial getters
summary: Rule advising member functions to access member variables directly rather than calling the class's own trivial accessors unless they add real logic.
---

**Rule.** Within a class's member functions, access member variables directly
rather than calling the class's own trivial accessor methods (such as simple
getters or snake_case() accessors on \*this). Only call accessor methods
internally if they provide non-trivial logic, caching, locking, or virtual
dispatch.

**Why.** Calling trivial getters from within member functions adds redundant
call indirection and cognitive noise. It also unnecessarily couples internal
method implementations to public accessor interfaces and return types when the
member variable is already directly accessible.

## Examples

Bad:

```cpp
// Bad: Calling the class's own trivial getter inside a member function.
absl::uint128 Uuid::AsInteger() const {
  std::string_view uuid = AsLowercaseString();
  return ParseUuidToUint128(uuid);
}
```

Good:

```cpp
// Good: Accessing the member variable directly.
absl::uint128 Uuid::AsInteger() const {
  std::string_view uuid = lowercase_;
  return ParseUuidToUint128(uuid);
}
```
