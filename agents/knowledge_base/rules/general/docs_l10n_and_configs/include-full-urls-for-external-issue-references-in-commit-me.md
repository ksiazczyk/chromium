---
name: general/include-full-urls-for-external-issue-references-in-commit-me
rubric: readability
severity: nit
type: guide
title: Include full URLs for external issue references in commit messages
summary: Rule requiring full URLs instead of bare issue numbers or shorthand when citing external trackers, standards discussions, or specs in commit messages.
---

**Rule.** When citing external issue trackers, standards group discussions, or
specification repositories (such as GitHub, W3C, or WHATWG issues) in a commit
message body, provide the full URL rather than just an issue number, short name,
or title. Keep URLs unbroken on their own line if necessary to preserve link
integrity.

**Why.** Reviewers and future maintainers reading Git history cannot resolve
bare issue numbers or shorthand names across external repositories without
manual searching. Providing full URLs gives immediate access to upstream
discussion, specification context, and consensus rationale.

## Examples

Bad:

```cpp
This matches Safari's implementation and addresses WECG issue #252.
```

Good:

```cpp
This matches Safari's implementation and addresses WECG issue #252:
https://github.com/w3c/webextensions/issues/252
```
