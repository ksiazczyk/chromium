---
name: general/use-lowercase-unchecked-in-java-suppress-warnings
rubric: readability
severity: nit
type: guide
title: Use lowercase unchecked in Java SuppressWarnings
summary: Coding rule requiring standard lowercase JLS warning tokens such as unchecked and deprecation in @SuppressWarnings annotations instead of capitalized variants.
---

**Rule.** In Java `@SuppressWarnings` annotations, use standard lowercase token
names such as `@SuppressWarnings("unchecked")` or
`@SuppressWarnings("deprecation")` for compiler warnings. Do not capitalize
standard Java Language Specification (JLS) warning tokens (e.g. avoid
`"Unchecked"`).

**Why.** The Java Language Specification (JLS §9.6.4.5) and standard Java
compilers (javac) define compiler warning suppression tokens in all lowercase
(e.g., `"unchecked"`, `"deprecation"`, `"rawtypes"`). Non-standard casing like
`"Unchecked"` violates Java conventions, produces compiler or IDE warnings about
unrecognized suppression keys, and fails to suppress unchecked conversion
warnings across standard build toolchains.

## Examples

Bad:

```cpp
// BAD: Capitalized non-standard token "Unchecked"
@SuppressWarnings("Unchecked")
public static <T extends @Nullable Object> Supplier<T> ofNull() {
    return (Supplier<T>) NULL_SUPPLIER;
}
```

Good:

```cpp
// GOOD: Standard lowercase "unchecked" token per JLS §9.6.4.5
@SuppressWarnings("unchecked")
public static <T extends @Nullable Object> Supplier<T> ofNull() {
    return (Supplier<T>) NULL_SUPPLIER;
}
```
