---
type: readme
title: Data Sharing
summary: Introduces the data sharing component and explains how to run its C++ unit tests with the components_unittests filter file.
relations:
  - references /components/data_sharing/components_unittests.filter
---

# Data Sharing

This component contains functionality for sharing data.

## Testing

To run all the relevant C++ unit tests, you can run the `components_unittests`
target and give the `data_sharing` filter file as an argument:

```
./out/Default/components_unittests --test-launcher-filter-file=components/data_sharing/components_unittests.filter
```
