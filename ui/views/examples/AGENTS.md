---
type: note
title: Views Examples and JSON View Builder Rules
summary: Agent rules requiring the JSON Schema documentation and unit tests to be updated whenever json_view_builder components, layout managers, or properties change.
relations:
  - references /ui/views/examples/json_view_builder.h
  - references /ui/views/examples/json_view_builder.cc
  - references /ui/views/examples/json_view_builder_schema.md
---

# Views Examples & JSON View Builder Rules

- When modifying `json_view_builder.h` or `json_view_builder.cc` to add, change, or remove supported components, layout managers, or properties:
  - Always update the JSON Schema documentation in `json_view_builder_schema.md` to maintain full congruency.
  - Add or update corresponding unit tests in `json_view_builder_unittest.cc`.
