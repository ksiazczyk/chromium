---
type: readme
title: Login detection
summary: Explains how OAuth login detection heuristics trigger Site Isolation for login sites on Android and save them in preferences.
---

# Login detection

This code detects when a user logs in on a site via OAuth.  In particular,
it detects sites that had successful OAuth login flows using heuristics
that observe URL request parameters during navigations.  This information
is used to trigger [Site
Isolation](https://www.chromium.org/Home/chromium-security/site-isolation/)
for login sites on platforms like Android, where Site Isolation cannot be
used for all sites.  The login sites are also saved in preferences.  Note
that the detector's heuristics are not expected to be perfect.
