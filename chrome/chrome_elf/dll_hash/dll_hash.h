// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DLL name to hash header
// summary: Declares DllNameToHash, which converts a DLL name into a hash value suitable for UMA reporting.
// ---

#ifndef CHROME_CHROME_ELF_DLL_HASH_DLL_HASH_H_
#define CHROME_CHROME_ELF_DLL_HASH_DLL_HASH_H_

#include <string>

// Convert a dll name to a hash that can be sent via UMA.
int DllNameToHash(const std::string& dll_name);

#endif  // CHROME_CHROME_ELF_DLL_HASH_DLL_HASH_H_
