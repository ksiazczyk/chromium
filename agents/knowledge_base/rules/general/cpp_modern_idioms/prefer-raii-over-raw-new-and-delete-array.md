---
name: general/prefer-raii-over-raw-new-and-delete-array
rubric: readability
severity: should_fix
type: reference
title: Prefer RAII over raw new and delete array
summary: Coding rule advising against raw new[] and delete[] in favor of RAII containers such as std::make_unique, base::HeapArray, or std::vector.
---

**Rule.** Avoid manual dynamic memory allocation using raw `new[]` and explicit
`delete[]`. For fixed-size heap allocations (such as in tests exercising heap
allocators), use `std::make_unique<std::array<T, N>>()`; for dynamically sized
buffers, use standard owning containers like `base::HeapArray<T>` or
`std::vector<T>` to guarantee RAII lifetime management.

**Why.** Manual memory management with raw `new[]` and `delete[]` is
error-prone, violates modern C++ and Chromium style conventions, and leaks
memory if assertions fail, exceptions occur, or functions exit early. RAII
containers and smart pointers manage allocation lifetimes automatically and
integrate safely with bounds-checked spans.

## Examples

Bad:

```cpp
// BAD: Manual dynamic array allocation with raw new[] and delete[].
char* buffer = new char[kBufferSize];
DoWorkWithBuffer(buffer);
delete[] buffer;
```

Good:

```cpp
// GOOD: Use RAII smart containers like std::make_unique<std::array> or base::HeapArray.
// For compile-time fixed-size heap allocations:
auto fixed_storage = std::make_unique<std::array<char, 32u>>();
DoWorkWithBuffer(fixed_storage->data());

// For dynamically sized runtime heap allocations:
auto dynamic_storage = base::HeapArray<char>::WithSize(runtime_size);
DoWorkWithBuffer(dynamic_storage.data());
```
