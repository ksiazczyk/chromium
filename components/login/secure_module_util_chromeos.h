// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Secure module utility header for Chrome OS
// summary: Declares the SecureModuleUsed enum and the exported asynchronous GetSecureModuleUsed API that reports whether Cr50 or TPM is in use.
// ---

#ifndef COMPONENTS_LOGIN_SECURE_MODULE_UTIL_CHROMEOS_H_
#define COMPONENTS_LOGIN_SECURE_MODULE_UTIL_CHROMEOS_H_

#include "base/functional/callback.h"
#include "components/login/login_export.h"

namespace login {

enum class SecureModuleUsed {
  UNQUERIED,
  CR50,
  TPM,
};

// Receives one argument which contains the type of secure module we are using.
using GetSecureModuleUsedCallback =
    base::OnceCallback<void(SecureModuleUsed secure_module)>;

// Gets the secure module by checking for certain files on the filesystem or in
// the cache. |callback| is called with type of secure module we are using.
void LOGIN_EXPORT GetSecureModuleUsed(GetSecureModuleUsedCallback callback);

}  // namespace login

#endif  // COMPONENTS_LOGIN_SECURE_MODULE_UTIL_CHROMEOS_H_
