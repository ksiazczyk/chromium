// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: POSIX thread local storage backend
// summary: Implements PlatformThreadLocalStorage allocation, freeing and value setting on top of pthread keys for POSIX platforms.
// ---

#include "base/threading/thread_local_storage.h"

#include "base/check_op.h"

namespace base::internal {

bool PlatformThreadLocalStorage::AllocTLS(TLSKey* key) {
  return !pthread_key_create(
      key, base::internal::PlatformThreadLocalStorage::OnThreadExit);
}

void PlatformThreadLocalStorage::FreeTLS(TLSKey key) {
  int ret = pthread_key_delete(key);
  DCHECK_EQ(ret, 0);
}

void PlatformThreadLocalStorage::SetTLSValue(TLSKey key, void* value) {
  int ret = pthread_setspecific(key, value);
  DCHECK_EQ(ret, 0);
}

}  // namespace base::internal
