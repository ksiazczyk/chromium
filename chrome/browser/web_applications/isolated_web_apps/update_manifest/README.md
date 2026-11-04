---
type: readme
title: Isolated Web App Update Manifest README
summary: Describes the directory's role in fetching and parsing JSON Update Manifests for Isolated Web Apps and outlines its key components.
relations:
  - documents /chrome/browser/web_applications/isolated_web_apps/update_manifest/update_manifest.cc
  - documents /chrome/browser/web_applications/isolated_web_apps/update_manifest/update_manifest.h
  - documents /chrome/browser/web_applications/isolated_web_apps/update_manifest/update_manifest_fetcher.cc
---

# Isolated Web App Update Manifest (`chrome/browser/web_applications/isolated_web_apps/update_manifest`)

This directory implements fetching and parsing of JSON Update Manifests for
Isolated Web Apps (IWAs).

## Key Components

- `UpdateManifest` (`update_manifest.{h,cc}`): Value type (`CreateFromJson`)
  representing a parsed IWA Update Manifest, mapping version entries
  (`UpdateManifest::VersionEntry`) and channel metadata
  (`UpdateManifest::ChannelMetadata`) to Signed Web Bundle download URLs.
- `UpdateManifestFetcher` (`update_manifest_fetcher.{h,cc}`): Resolves the
  target host via `network::SimpleHostResolver` (enforcing Local Network Access
  checks), downloads the Update Manifest using a restricted `SimpleURLLoader`,
  and parses the JSON payload via `base::JSONReader`.
