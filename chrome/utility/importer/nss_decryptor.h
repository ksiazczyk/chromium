// Copyright 2009 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NSS decryptor platform selector
// summary: Header that includes the Windows or system NSS implementation of NSSDecryptor depending on the build platform.
// ---

#ifndef CHROME_UTILITY_IMPORTER_NSS_DECRYPTOR_H_
#define CHROME_UTILITY_IMPORTER_NSS_DECRYPTOR_H_

#include "build/build_config.h"
#include "crypto/crypto_buildflags.h"

#if BUILDFLAG(IS_WIN)
#include "chrome/utility/importer/nss_decryptor_win.h"
#elif BUILDFLAG(USE_NSS_CERTS)
#include "chrome/utility/importer/nss_decryptor_system_nss.h"
#else
#error NSSDecryptor not implemented.
#endif

#endif  // CHROME_UTILITY_IMPORTER_NSS_DECRYPTOR_H_
