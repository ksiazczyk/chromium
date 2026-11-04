---
name: general/prefer-as-string-view-for-jarray-view
rubric: readability
severity: nit
type: guide
title: Prefer as_string_view for JArrayView Conversions
summary: Coding rule advising jni_zero's as_string_view() helper over manually building a std::string_view with reinterpret_cast from data and size.
---

**Rule.** Call `.as_string_view()` directly on `jni_zero::JArrayView<int8_t>` or
`jni_zero::JArrayViewCritical<int8_t>` to obtain a `std::string_view`. Avoid
manually constructing a `std::string_view` from `.data()` and `.size()` using
`reinterpret_cast<const char*>`.

**Why.** The `.as_string_view()` helper encapsulates the required
`reinterpret_cast` from `int8_t*` to `const char*`, enforces lifetime safety via
`[[clang::lifetimebound]]` annotations to prevent dangling views, and eliminates
repetitive boilerplate at JNI bridge call sites.

## Examples

Bad:

```cpp
// Bad: manual raw pointer cast and length construction
jni_zero::JArrayView<int8_t> data_view = data.CreateView(env);
std::string_view data_string_view(
    reinterpret_cast<const char*>(data_view.data()), data_view.size());
```

Good:

```cpp
// Good: safe, concise conversion using the subsystem helper
jni_zero::JArrayView<int8_t> data_view = data.CreateView(env);
std::string_view data_string_view = data_view.as_string_view();
```
