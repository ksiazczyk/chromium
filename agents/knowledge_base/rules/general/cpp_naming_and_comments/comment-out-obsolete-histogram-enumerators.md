---
name: general/comment-out-obsolete-histogram-enumerators
rubric: readability
severity: nit
type: guide
title: Comment out obsolete histogram enumerators
summary: Coding rule to comment out unused enumerators persisted to histograms while preserving their numeric assignments, since logs and dashboards depend on stable values.
---

**Rule.** When removing obsolete or unused enumerators from enums persisted to
histograms or logs, comment out the unused enumerator while preserving its
explicit numeric assignment (e.g., `// OBSOLETE: kFoo = 1,`). Do not leave
obsolete values declared as active C++ enum members with deprecation comments,
and do not renumber or delete existing numeric values.

**Why.** Persisted histogram enum values must never be renumbered or reused
because existing client logs and historical dashboards depend on numeric
stability. Commenting out obsolete enumerators preserves the numeric allocation
while removing the dead symbol from the C++ API, avoiding dead branches in
switch statements and preventing accidental new references.

## Examples

Bad:

```cpp
// These values are persisted to logs. Entries should not be renumbered and
// numeric values should never be reused.
enum class FileReplaceResult {
  kSuccess = 0,
  // DEPRECATED: No longer emitted by ReplaceFile.
  kUnableToFindValidBackupFilePath = 1,
  kFailedToOpenSource = 2,
  kMaxValue = kFailedToOpenSource,
};
```

Good:

```cpp
// These values are persisted to logs. Entries should not be renumbered and
// numeric values should never be reused.
enum class FileReplaceResult {
  kSuccess = 0,
  // OBSOLETE: kUnableToFindValidBackupFilePath = 1,
  kFailedToOpenSource = 2,
  kMaxValue = kFailedToOpenSource,
};
```
