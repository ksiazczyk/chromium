---
name: general/no-redundant-size-check-with-std-ranges-equal
rubric: readability
severity: nit
type: reference
title: No redundant size checks with std::ranges::equal
summary: Rule against manual size or count checks before std::ranges::equal, which automatically verifies that the compared ranges have matching lengths.
---

**Rule.** When comparing two ranges, spans, or containers using
`std::ranges::equal`, do not write explicit size or count checks (such as
`lhs.size() == rhs.size() && ...`). `std::ranges::equal` takes two ranges and
automatically verifies that their lengths match before comparing elements.

**Why.** Unlike legacy three-iterator `std::equal`, `std::ranges::equal` checks
range sizes automatically. Preceding `std::ranges::equal` with a manual length
or size check adds redundant code and unnecessary boilerplate.

## Examples

Bad:

```cpp
bool operator==(const Backtrace& lhs, const Backtrace& rhs) {
  return lhs.frame_count == rhs.frame_count &&
         std::ranges::equal(base::span(lhs.frames).first(lhs.frame_count),
                            base::span(rhs.frames).first(rhs.frame_count));
}
```

Good:

```cpp
bool operator==(const Backtrace& lhs, const Backtrace& rhs) {
  return std::ranges::equal(base::span(lhs.frames).first(lhs.frame_count),
                            base::span(rhs.frames).first(rhs.frame_count));
}
```
