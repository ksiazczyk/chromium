---
name: general/place-argument-value-comments-after-trailing-comma
rubric: readability
severity: nit
type: reference
title: Place argument value comments after the trailing comma
summary: Coding rule that explanatory comments for function arguments go as trailing line comments after the comma, keeping /*param_name=*/ annotations before the value.
---

**Rule.** When annotating the meaning of a function argument (such as
documenting an unexported enum name, symbolic constant, or error code for a
numeric literal), place the explanatory comment as a trailing line comment
(`// ...`) after the comma rather than an inline block comment (`/* ... */`)
before the comma. Keep `/*param_name=*/` parameter annotations preceding the
argument value.

**Why.** Embedding an inline block comment directly after an argument literal
before the comma breaks punctuation flow and awkwardly stacks adjacent block
comments when `/*param_name=*/` annotations are present. Placing explanatory
notes as trailing line comments after the comma keeps parameter annotations,
argument expressions, and explanatory remarks cleanly separated and formatted.

## Examples

Bad:

```cpp
tester.ExpectUniqueSample(
    "FileUtil.ReplaceFileResult",
    /*sample=*/5 /* ReplaceFileResult::kOtherErrorsMoveFailed */,
    /*count=*/1);
```

Good:

```cpp
tester.ExpectUniqueSample(
    "Windows.ReplaceFileResult",
    /*sample=*/6,  // ReplaceFileResult::kFileNotFoundMoveFailed
    /*count=*/1);
```
