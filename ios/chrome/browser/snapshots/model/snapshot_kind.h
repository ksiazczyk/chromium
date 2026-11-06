// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SnapshotKind snapshot type enum
// summary: Defines a closed enum listing the kinds of tab snapshots, currently color and greyscale.
// ---

#ifndef IOS_CHROME_BROWSER_SNAPSHOTS_MODEL_SNAPSHOT_KIND_H_
#define IOS_CHROME_BROWSER_SNAPSHOTS_MODEL_SNAPSHOT_KIND_H_

#import <Foundation/Foundation.h>

// Represents the kind of snapshot.
typedef NS_CLOSED_ENUM(NSInteger, SnapshotKind) {
  SnapshotKindColor,
  SnapshotKindGreyscale,
};

#endif  // IOS_CHROME_BROWSER_SNAPSHOTS_MODEL_SNAPSHOT_KIND_H_
