---
name: general/account-for-git-footers-normalization-in-presubmit
rubric: correctness
severity: nit
type: reference
title: Hyphenate custom Git footer keys in PRESUBMIT checks
summary: Rule requiring PRESUBMIT checks to hyphenate custom Git footer keys so lookups match the Title-Casing normalization that depot_tools' git_footers.py applies to footer names.
---

**Rule.** In PRESUBMIT checks reading
'input_api.change.GitFootersFromDescription()', hyphenate each word in custom
footer keys (e.g., 'Allow-Foo-Bar-Changes') rather than using unhyphenated
camelCase segments. Ensure queried keys match the normalized Title-Casing
produced by depot_tools' 'git_footers.py'.

**Why.** depot_tools' 'git_footers.py' normalizes footer keys by splitting on
hyphens and calling 'capitalize()' on each token, converting internal uppercase
letters in unhyphenated camelCase segments to lowercase (e.g.,
'MainLayoutSwitcher' becomes 'Mainlayoutswitcher'). Querying unhyphenated
camelCase footer keys will silently fail to match the footer.

## Examples

Bad:

```cpp
# git_footers.py normalizes compound words like 'MainLayoutSwitcher' to 'Mainlayoutswitcher'
git_footers = input_api.change.GitFootersFromDescription()
if 'true' in [footer.lower() for footer in git_footers.get(
        u'Allow-MainLayoutSwitcher-Changes', [])]:
    return []
```

Good:

```cpp
# Hyphenate each word so capitalize() preserves title casing across tokens:
git_footers = input_api.change.GitFootersFromDescription()
if 'true' in [footer.lower() for footer in git_footers.get(
        u'Allow-Main-Layout-Switcher-Changes', [])]:
    return []
```
