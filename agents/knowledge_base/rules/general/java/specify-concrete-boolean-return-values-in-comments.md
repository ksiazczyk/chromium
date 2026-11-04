---
name: general/specify-concrete-boolean-return-values-in-comments
rubric: readability
severity: should_fix
type: reference
title: Specify concrete boolean return values in comments
summary: Chromium rule to document boolean-returning functions with explicit true or false outcomes for each case instead of vague phrasing like returning a boolean if successful.
---

**Rule.** When documenting functions or methods that return a boolean,
explicitly specify the concrete return value (`true` or `false`) for each
outcome (e.g., 'Returns true if successful', 'Returns true on success, false on
failure'). Do not describe a bool-returning function as returning a boolean
conditionally (e.g., 'returns a boolean if successful').

**Why.** Functions with a boolean return type unconditionally return a boolean
value regardless of whether the operation succeeds or fails. Phrasing comments
as 'returns a boolean if successful' is logically inaccurate and obscures the
exact contract and meaning of the returned boolean values.

## Examples

Bad:

```cpp
// Removes the quarantine attribute from the given file, and returns a boolean if
// successful.
BASE_EXPORT bool RemoveQuarantineAttribute(const FilePath& file_path);
```

Good:

```cpp
// Removes the quarantine attribute from the given file, and returns true if
// successful.
BASE_EXPORT bool RemoveQuarantineAttribute(const FilePath& file_path);
```
