// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App Service proxy forward declarations
// summary: Provides a cross-platform forward declaration of AppServiceProxy, aliasing the Ash or base implementation depending on the build.
// ---

#ifndef CHROME_BROWSER_APPS_APP_SERVICE_APP_SERVICE_PROXY_FORWARD_H_
#define CHROME_BROWSER_APPS_APP_SERVICE_APP_SERVICE_PROXY_FORWARD_H_

#include "build/build_config.h"

namespace apps {

// Include this header to forward-declare AppServiceProxy in a way that is
// compatible across all platforms.
#if BUILDFLAG(IS_CHROMEOS)
class AppServiceProxyAsh;
using AppServiceProxy = AppServiceProxyAsh;
#else
class AppServiceProxyBase;
using AppServiceProxy = AppServiceProxyBase;
#endif  // BUILDFLAG(IS_CHROMEOS)

}  // namespace apps

#endif  // CHROME_BROWSER_APPS_APP_SERVICE_APP_SERVICE_PROXY_FORWARD_H_
