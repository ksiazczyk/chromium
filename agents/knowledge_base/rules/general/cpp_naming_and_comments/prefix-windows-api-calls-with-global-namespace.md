---
name: general/prefix-windows-api-calls-with-global-namespace
rubric: readability
severity: nit
type: reference
title: Prefix Windows API calls with the global namespace
summary: 'Style rule requiring Windows/Win32 API calls to be qualified with the global namespace :: so OS calls stand apart from project helpers and shadowed names.'
---

**Rule.** When calling Windows/Win32 platform API functions (such as
`CreateFileMapping`, `GetLastError`, `CloseHandle`, or `VirtualAlloc`), prefix
the function call with the global namespace qualifier `::`. Do not leave Windows
platform API calls unqualified.

**Why.** Prefixing Windows platform APIs with explicit global scope (`::`)
distinguishes OS system calls from Chromium helper functions, member methods, or
shadowed names in enclosing namespaces, making the origin of the call
immediately obvious to readers and reviewers.

## Examples

Bad:

```cpp
HANDLE mapping = CreateFileMapping(INVALID_HANDLE_VALUE, nullptr,
                                   PAGE_READWRITE, 0, size, nullptr);
if (!mapping) {
  DWORD error = GetLastError();
  return nullptr;
}
CloseHandle(mapping);
```

Good:

```cpp
HANDLE mapping = ::CreateFileMapping(INVALID_HANDLE_VALUE, nullptr,
                                     PAGE_READWRITE, 0, size, nullptr);
if (!mapping) {
  DWORD error = ::GetLastError();
  return nullptr;
}
::CloseHandle(mapping);
```
