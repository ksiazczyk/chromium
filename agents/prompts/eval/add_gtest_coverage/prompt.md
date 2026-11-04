---
title: Agent prompt for adding unit tests
summary: Prompt asking the agent to add and run unit tests for RegionCaptureBounds methods without committing or reverting them.
---

Help me add unit level tests for the following methods.
Compile and run the tests. Do not commit or revert the tests.

components/viz/common/surfaces/region\_capture\_bounds.h  viz::RegionCaptureBounds::IsEmpty() const
components/viz/common/surfaces/region\_capture\_bounds.c  viz::RegionCaptureBounds::Empty()
components/viz/common/surfaces/region\_capture\_bounds.c  viz::RegionCaptureBounds::Set(base::Token const&, gfx::Rect const&)
components/viz/common/surfaces/region\_capture\_bounds.c  viz::RegionCaptureBounds::Reset()

