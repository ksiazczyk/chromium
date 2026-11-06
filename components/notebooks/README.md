---
type: readme
title: Notebooks Component
summary: README describing the Notebooks component's purpose, its public and internal directory layout, and how to run its tests with autotest.py.
relations:
  - references /tools/autotest.py
---

# Notebooks Component

This component contains the core interface and implementations for Notebooks.

## Directory Structure

- `public/`: Public interface for the service.
- `internal/`: Implementation of the service.

## Testing

To run all tests in this component, use `autotest.py`:

```bash
tools/autotest.py -C out/Default components/notebooks
```

