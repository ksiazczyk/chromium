// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebDatabaseTable base implementation
// summary: Implements Init and Shutdown for the abstract WebDatabaseTable base class, storing and resetting the database, meta table, and encryptor references.
// ---

#include "components/webdata/common/web_database_table.h"

#include "base/memory/scoped_refptr.h"
#include "components/os_crypt/async/common/encryptor.h"

WebDatabaseTable::WebDatabaseTable() : db_(nullptr), meta_table_(nullptr) {}
WebDatabaseTable::~WebDatabaseTable() = default;

void WebDatabaseTable::Init(
    sql::Database* db,
    sql::MetaTable* meta_table,
    scoped_refptr<const os_crypt_async::Encryptor> encryptor) {
  db_ = db;
  meta_table_ = meta_table;
  encryptor_ = std::move(encryptor);
}

void WebDatabaseTable::Shutdown() {
  db_ = nullptr;
  meta_table_ = nullptr;
  encryptor_ = nullptr;
}
