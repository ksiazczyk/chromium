---
type: readme
title: Security Interstitials on iOS
summary: Explains the iOS implementation of security interstitials, its central classes, and how it builds on the core interstitials component.
relations:
  - documents /ios/components/security_interstitials/ios_blocking_page_controller_client.h
  - documents /ios/components/security_interstitials/ios_blocking_page_controller_client.mm
  - documents /ios/components/security_interstitials/ios_blocking_page_tab_helper.h
---

# Security Interstitials on iOS

This directory contains the iOS implementation of security interstitials --
warning pages that are shown instead of web content when certain security events
occur (such as an invalid certificate on an HTTPS connection, or a URL that is
flagged by Safe Browsing). This component builds on top of the core security
interstitials component in `//components/security_interstitials`.

Security interstitials are split between an HTML+JS front end (which defines the
actual contents shown) and a backing implementation. The front end
implementation for interstitials are generally shared across platforms and
implemented in `//components/security_interstitials/core`. This component
contains the backing implementation for interstitials on iOS.

The central classes on iOS are:

*   `IOSBlockingPageControllerClient`, which implements the `ControllerClient`
    interface for iOS.
*   `IOSBlockingPageTabHelper`, which manages interstitial page lifetimes and
    connects and interstitial with the tab and navigation in which it occurs.
*   `IOSSecurityInterstitialJavaScriptFeature`, which listens for interstitial
    commands from user actions on the interstitial pages.
*   `IOSSecurityInterstitialPage`, which handles the state of the interstitial
    page. This is extended for each interstitial type.

This directory is not an exhaustive container of all security interstitials on
iOS. Some interstitials are implemented in more specific directories (such as
the SSL interstitial in `ios/chrome/browser/ssl/model/`).
