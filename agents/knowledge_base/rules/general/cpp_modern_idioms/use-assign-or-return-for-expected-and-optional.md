---
name: general/use-assign-or-return-for-expected-and-optional
rubric: readability
severity: should_fix
type: reference
title: Use ASSIGN_OR_RETURN for expected and optional
summary: Coding rule requiring ASSIGN_OR_RETURN and RETURN_IF_ERROR macros for propagating failures from base::expected or std::optional instead of manual has_value checks and error wrapping.
relations:
  - references /base/types/expected_macros.h
---

**Rule.** Use `ASSIGN_OR_RETURN` and `RETURN_IF_ERROR` from
`base/types/expected_macros.h` instead of manually checking
`!result.has_value()` and returning `base::unexpected(...)` or error codes when
propagating failures from `base::expected` or `std::optional`.
`ASSIGN_OR_RETURN` unwraps the success value directly into a local variable in
the calling scope while propagating unexpected errors early.

**Why.** `ASSIGN_OR_RETURN` and `RETURN_IF_ERROR` eliminate repetitive
conditional boilerplate and manual error wrapping, keep happy paths unnested and
readable, and safely forward move-only or mapped error values.

## Examples

Bad:

```cpp
auto validation_data = GeneratePathValidationData(*process_path);
if (!validation_data.has_value()) {
  return base::unexpected(validation_data.error());
}
```

Good:

```cpp
ASSIGN_OR_RETURN(auto validation_data,
                 GeneratePathValidationData(*process_path));
```
