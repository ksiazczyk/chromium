---
type: readme
title: Collaboration component overview and testing
summary: Describes the collaboration component and explains how to run its C++ unit tests using the collaboration filter file with components_unittests.
relations:
  - references /components/collaboration/components_unittests.filter
---

# Collaboration

This component contains functionality for collaboration groups.

## Testing

To run all the relevant C++ unit tests, you can run the `components_unittests`
target and give the `collaboration` filter file as an argument:

```
./out/Default/components_unittests --test-launcher-filter-file=components/collaboration/components_unittests.filter
```
