---
name: general/disambiguate-boundary-events-in-interval-names
rubric: readability
severity: should_fix
type: decision
title: Disambiguate boundary events in interval names
summary: Coding rule requiring duration and latency metric names to state which boundary event of the previous period they start from, avoiding ambiguous previous_<event> identifiers.
---

**Rule.** When naming variables, metrics, telemetry fields, or schema columns
that measure durations, deltas, or latencies across consecutive windows, frames,
or batches, explicitly specify which boundary event is referenced (such as
`previous_last_<event>` or `previous_first_<event>` instead of ambiguous
`previous_<event>`) whenever the preceding period can contain multiple events.

**Why.** Referring generically to `previous_<event>` when a preceding period
contains multiple events creates ambiguity about whether the interval starts
from the first or the last event of that period. Disambiguating the endpoint in
the identifier clarifies metric semantics for reviewers and prevents incorrect
assumptions in downstream calculations or queries.

## Examples

Bad:

```cpp
-- Ambiguous: unclear whether start is the first or last input from previous frame
CREATE PERFETTO TABLE chrome_scroll_intervals(
  scroll_id LONG,
  previous_input_to_first_input_generation_dur DURATION
) AS ...
```

Good:

```cpp
-- Explicit: disambiguates that the interval starts at the last input of previous frame
CREATE PERFETTO TABLE chrome_scroll_intervals(
  scroll_id LONG,
  previous_last_input_to_first_input_generation_dur DURATION
) AS ...
```
