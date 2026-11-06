---
type: readme
title: IWA Error Types & UMA Logging
summary: Describes the directory's structured Signed Web Bundle error type and the UMA metric helpers for Isolated Web Apps.
relations:
  - documents /components/webapps/isolated_web_apps/error/uma_logging.cc
  - documents /components/webapps/isolated_web_apps/error/uma_logging.h
  - documents /components/webapps/isolated_web_apps/error/unusable_swbn_file_error.cc
---

# IWA Error Types & UMA Logging (`components/webapps/isolated_web_apps/error`)

This directory defines structured error types for Signed Web Bundle reading and
UMA metric helpers for Isolated Web Apps.

## Key Components

- `UnusableSwbnFileError` (`unusable_swbn_file_error.{h,cc}`): Structured error
  type categorizing integrity block, signature verification, and metadata
  parsing failures when opening a `.swbn` file.
- `uma_logging.{h,cc}`: Defines `UmaLogExpectedStatus()` and `ToErrorEnum()`
  helpers for recording `base::expected<T, E>` success rates and error enums
  (including `UnusableSwbnFileError`) to UMA histograms.
