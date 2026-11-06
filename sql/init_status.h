// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Database initialization status enum
// summary: Defines the InitStatus enum used as the return value of database init functions, covering success, failure, too-new databases and data-loss recovery.
// ---

#ifndef SQL_INIT_STATUS_H_
#define SQL_INIT_STATUS_H_

namespace sql {

// Used as the return value for some databases' init functions.
enum InitStatus {
  INIT_OK,

  // Some error, usually I/O related opening the file.
  INIT_FAILURE,

  // The database is from a future version of the app and cannot be read.
  INIT_TOO_NEW,

  // The database was deleted and re-opened successfully.
  INIT_OK_WITH_DATA_LOSS,
};

}  // namespace sql

#endif  // SQL_INIT_STATUS_H_
