// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GCAPI reactivation header
// summary: Declares HasBeenReactivated and SetReactivationBrandCode, which track and record Chrome reactivation offers for partner brand codes.
// ---

#ifndef CHROME_INSTALLER_GCAPI_GCAPI_REACTIVATION_H_
#define CHROME_INSTALLER_GCAPI_GCAPI_REACTIVATION_H_

#include <string>
#include <vector>

bool HasBeenReactivated();

bool SetReactivationBrandCode(const std::wstring& brand_code, int shell_mode);

#endif  // CHROME_INSTALLER_GCAPI_GCAPI_REACTIVATION_H_
