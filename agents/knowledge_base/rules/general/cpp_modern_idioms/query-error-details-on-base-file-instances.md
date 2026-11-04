---
name: general/query-error-details-on-base-file-instances
rubric: readability
severity: should_fix
type: reference
title: Query error details on base::File instances
summary: Coding rule to read failure reasons via file.error_details() instead of the static GetLastFileError(), whose thread-local OS error state can be clobbered.
---

**Rule.** When retrieving or propagating failure reasons from a base::File
instance that failed to open or create, call file.error_details() on the
instance rather than static base::File::GetLastFileError().

**Why.** A base::File instance records its initialization error code in
error_details() at the moment of failure. In contrast,
base::File::GetLastFileError() inspects ambient thread-local OS error state
(::GetLastError() or errno), which can be overwritten or clobbered by
intervening operations such as metric recording, logging, or cleanup routines.

## Examples

Bad:

```cpp
base::File temp_file = CreateAndOpenTemporaryFileInDir(dir, &backup_path);
if (!temp_file.IsValid()) {
  RecordReplaceFileResult(false, ...);
  if (error) {
    *error = base::File::GetLastFileError();
  }
  return false;
}
```

Good:

```cpp
base::File temp_file = CreateAndOpenTemporaryFileInDir(dir, &backup_path);
if (!temp_file.IsValid()) {
  RecordReplaceFileResult(false, ...);
  if (error) {
    *error = temp_file.error_details();
  }
  return false;
}
```
