---
type: readme
title: Autofill Profiles for Manual Testing
summary: Explains how to import the profile JSON files in this directory for manual autofill testing via the --autofill-profiles-for-manual-testing flag, ideally with a temporary user data dir.
---

The JSON files in this directory contains descriptions of profiles intended for
manual testing. They can be imported using the following command line flag:
```
--autofill-profiles-for-manual-testing=path/to/json
```
This overwrites all existing profiles permanently. It is therefore
recommended to use a temporary user data dir: `--user-data-dir=/tmp/...`
