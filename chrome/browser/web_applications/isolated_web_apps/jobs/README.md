---
type: readme
title: Isolated Web App Jobs directory README
summary: Documents the composable asynchronous jobs in the directory, including PrepareInstallInfoJob and GetIsolatedWebAppSizeJob, used by Isolated Web App commands and metadata readers.
relations:
  - documents /chrome/browser/web_applications/isolated_web_apps/jobs/get_isolated_web_app_size_job.cc
  - documents /chrome/browser/web_applications/isolated_web_apps/jobs/get_isolated_web_app_size_job.h
  - documents /chrome/browser/web_applications/isolated_web_apps/jobs/prepare_install_info_job.cc
---

# Isolated Web App Jobs (`chrome/browser/web_applications/isolated_web_apps/jobs`)

This directory contains composable asynchronous jobs invoked by Isolated Web App
commands and metadata readers.

## Key Jobs

- `PrepareInstallInfoJob` (`prepare_install_info_job.{h,cc}`): Creates a
  dedicated `content::WebContents`, attaches
  `NonInstalledBundleInspectionContext`, loads the generated install page
  (`/.well-known/_generated_install_page.html`), retrieves the Web App Manifest,
  and delegates to `ManifestToWebAppInstallInfoJob` to produce a validated
  `WebAppInstallInfo` (used during initial install, update preparation, update
  application, and `SignedWebBundleMetadata::Create`).
- `GetIsolatedWebAppSizeJob` (`get_isolated_web_app_size_job.{h,cc}`):
  Implements `ComputeAppSizeJob` inside an active command lock
  (`WithAppResources*`) to compute total on-disk bundle size, app icon storage,
  and `StoragePartition` browsing data usage for an installed IWA.
