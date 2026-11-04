---
name: general/document-heuristic-and-threshold-criteria-in-interface-defin
rubric: readability
severity: optional
type: guide
title: Document heuristic and threshold criteria in interface definitions
summary: Coding rule requiring comments explaining criteria, units, and thresholds for heuristic fields in cross-language or IPC interface definitions.
relations:
  - references /base/android/java/src/org/chromium/base/IDeviceInfo.aidl
---

**Rule.** When adding fields or properties to cross-language or IPC interface
definitions (such as AIDL, Mojom, Protobuf, or public data structures) whose
values depend on heuristics or specific thresholds, document the exact criteria,
units, and intended meaning in a comment. Avoid vague boolean or numeric
property names without inline documentation explaining the underlying conditions
or thresholds.

**Why.** Cross-boundary interfaces decouple consumers from implementation
details across processes and languages. Without explicit comments explaining
threshold values, units, and rationale, callers and maintainers cannot know what
assumptions or display metrics dictate the field's value.

## Examples

Bad:

```cpp
// IDeviceInfo.aidl
parcelable IDeviceInfo {
  boolean isLargeFormFactor;
}
```

Good:

```cpp
// IDeviceInfo.aidl
parcelable IDeviceInfo {
  // Display width is >= 600dp. At this width, we can display desktop pages instead of mobile.
  boolean wasLaunchedOnLargeDisplay;
}
```
