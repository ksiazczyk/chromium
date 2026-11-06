// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scan request upload result string conversion
// summary: Implements conversion of ScanRequestUploadResult enum values to their string names for logging and metrics.
// ---

#include "components/enterprise/connectors/core/cloud_content_scanning/common.h"

#include "base/notreached.h"

namespace enterprise_connectors {

std::string ScanRequestUploadResultToString(ScanRequestUploadResult result) {
  switch (result) {
    case ScanRequestUploadResult::kUnknown:
      return "UNKNOWN";
    case ScanRequestUploadResult::kSuccess:
      return "SUCCESS";
    case ScanRequestUploadResult::kUploadFailure:
      return "UPLOAD_FAILURE";
    case ScanRequestUploadResult::kTimeout:
      return "TIMEOUT";
    case ScanRequestUploadResult::kFileTooLarge:
      return "FILE_TOO_LARGE";
    case ScanRequestUploadResult::kFailedToGetToken:
      return "FAILED_TO_GET_TOKEN";
    case ScanRequestUploadResult::kUnauthorized:
      return "UNAUTHORIZED";
    case ScanRequestUploadResult::kFileEncrypted:
      return "FILE_ENCRYPTED";
    case ScanRequestUploadResult::kTooManyRequests:
      return "TOO_MANY_REQUESTS";
    case ScanRequestUploadResult::kIncompleteResponse:
      return "INCOMPLETE_RESPONSE";
    case ScanRequestUploadResult::kUserCancelled:
      return "USER_CANCELLED";
  }
  NOTREACHED();
}

}  // namespace enterprise_connectors
