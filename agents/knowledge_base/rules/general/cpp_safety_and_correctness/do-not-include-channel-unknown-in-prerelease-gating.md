---
name: general/do-not-include-channel-unknown-in-prerelease-gating
rubric: correctness
severity: should_fix
type: guide
title: Do Not Treat Channel UNKNOWN as a Pre-release Channel
summary: Coding rule that pre-release channel gating must check only targeted channels such as Canary or Dev, never version_info::Channel::UNKNOWN, which covers unbranded or corrupted builds.
---

**Rule.** When restricting an experiment, synthetic field trial, diagnostic
tool, or pre-release feature to early release channels (such as Canary, Dev, or
Beta), do not include version_info::Channel::UNKNOWN in the permitted channels.
Explicitly check only for the targeted channels (e.g., Channel::CANARY or
Channel::DEV).

**Why.** version_info::Channel::UNKNOWN is assigned to unbranded Chromium
developer builds and corrupted installations where channel detection fails.
Treating UNKNOWN as a pre-release channel exposes developer builds, automated
test environments, and corrupted production installations to unintended
experimental interventions.

## Examples

Bad:

```cpp
const version_info::Channel channel = install_static::GetChromeChannel();
if (channel != version_info::Channel::CANARY &&
    channel != version_info::Channel::DEV &&
    channel != version_info::Channel::UNKNOWN) {
  return false;
}
```

Good:

```cpp
const version_info::Channel channel = install_static::GetChromeChannel();
if (channel != version_info::Channel::CANARY &&
    channel != version_info::Channel::DEV) {
  return false;
}
```
