---
type: readme
title: tools/flags README
summary: Introduces the tooling in this directory for working with feature flag entries and the automation that expires flags based on their metadata.
relations:
  - references /docs/flag_expiry.md
  - documents /tools/flags/flags_utils.py
  - documents /tools/flags/generate_expired_list.py
---

# tools/flags

This directory contains tooling for working with chrome://flags entries and part
of the automation for expiring flags based on their metadata.

Specifically:
* [flags_utils.py](flags_utils.py): shared code between other tools in this
  directory
* [generate_expired_list.py](generate_expired_list.py): build script which
  produces a generated C++ source file containing a table of all expired flags
  and their expiration milestones
* [generate_unexpire_flags.py](generate_unexpire_flags.py): build script which
  produces C++ source and headers to define the "temporary-unexpire-flags-mX"
  flags
* [list_flags.py](list_flags.py): command-line tool to list subsets of flags
  from metadata; used by automation to file expired-flags bugs.

See [../../docs/flag_expiry.md](../../docs/flag_expiry.md) for more details
about flag expiry.
