---
type: readme
title: SQLite Encrypted VFS
summary: README describing a custom SQLite VFS wrapper that integrates with os_crypt_async to provide envelope encryption and key lifecycle management for sql::Database.
relations:
  - references /sql/database.h
---

# SQLite Encrypted VFS

`sqlite_encrypted_vfs` provides a custom SQLite Virtual File System (VFS)
wrapper for Chromium that integrates with `os_crypt_async` to provide envelope
encryption and key lifecycle management for [`sql::Database`](/sql/database.h).
