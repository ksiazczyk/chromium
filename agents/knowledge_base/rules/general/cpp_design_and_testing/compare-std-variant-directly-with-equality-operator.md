---
name: general/compare-std-variant-directly-with-equality-operator
rubric: design
severity: should_fix
type: guide
title: Compare std::variant Directly with Equality Operator
summary: Rule directing developers to use std::variant's built-in equality operators instead of hand-rolled std::visit or std::get dispatch logic, with contrasting examples.
---

**Rule.** Compare std::variant instances directly using operator== (or
operator!=) rather than hand-rolling alternative dispatch logic with std::visit,
std::get, or index comparisons. std::variant already implements comparison
operators that verify active alternative indices and compare contained values.

**Why.** std::variant provides built-in comparison operators that automatically
check matching alternative indices and compare the underlying values. Writing
manual std::visit or std::get boilerplate is over-engineered, error-prone, and
obscures intent.

## Examples

Bad:

```cpp
bool operator==(const IteratorImpl& other) const {
  CHECK_EQ(iter_variant_.index(), other.iter_variant_.index());
  return std::visit(
      [&other](const auto& it) {
        return it ==
               std::get<std::decay_t<decltype(it)>>(other.iter_variant_);
      },
      iter_variant_);
}
```

Good:

```cpp
bool operator==(const IteratorImpl& other) const {
  CHECK_EQ(iter_variant_.index(), other.iter_variant_.index());
  return iter_variant_ == other.iter_variant_;
}
```
