// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped Windows CNG handle types
// summary: Defines RAII scoped wrappers ScopedNCryptProvider and ScopedNCryptKey that free NCrypt objects for Windows CNG handles.
// ---

#ifndef CRYPTO_SCOPED_CNG_TYPES_H_
#define CRYPTO_SCOPED_CNG_TYPES_H_

#include <windows.h>

#include <wincrypt.h>

#include "base/scoped_generic.h"

namespace crypto {

template <typename T>
struct NCryptObjectTraits {
  static T InvalidValue() { return 0; }
  static void Free(T handle) { NCryptFreeObject(handle); }
};

using ScopedNCryptProvider =
    base::ScopedGeneric<NCRYPT_PROV_HANDLE,
                        NCryptObjectTraits<NCRYPT_PROV_HANDLE>>;
using ScopedNCryptKey =
    base::ScopedGeneric<NCRYPT_KEY_HANDLE,
                        NCryptObjectTraits<NCRYPT_KEY_HANDLE>>;

}  // namespace crypto

#endif  // CRYPTO_SCOPED_CNG_TYPES_H_
