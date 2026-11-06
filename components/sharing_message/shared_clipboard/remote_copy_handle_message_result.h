// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RemoteCopyHandleMessageResult enum header
// summary: Declares the RemoteCopyHandleMessageResult enum of Remote Copy message handling outcomes, whose values are persisted to logs and kept in sync with enums.xml.
// ---

#ifndef COMPONENTS_SHARING_MESSAGE_SHARED_CLIPBOARD_REMOTE_COPY_HANDLE_MESSAGE_RESULT_H_
#define COMPONENTS_SHARING_MESSAGE_SHARED_CLIPBOARD_REMOTE_COPY_HANDLE_MESSAGE_RESULT_H_

// Result of handling a Remote Copy message. These values are persisted to logs.
// Entries should not be renumbered and numeric values should never be reused.
// Keep this in sync with SharingRemoteCopyHandleMessageResult in enums.xml.
enum class RemoteCopyHandleMessageResult {
  kSuccessHandledText = 0,
  kSuccessHandledImage = 1,
  kFailureEmptyText = 2,
  kFailureImageUrlNotTrustworthy = 3,
  kFailureImageOriginNotAllowed = 4,
  kFailureNoImageContentLoaded = 5,
  kFailureDecodeImageFailed = 6,
  kFailureDecodedImageDrawsNothing = 7,
  kMaxValue = kFailureDecodedImageDrawsNothing,
};

#endif  // COMPONENTS_SHARING_MESSAGE_SHARED_CLIPBOARD_REMOTE_COPY_HANDLE_MESSAGE_RESULT_H_
