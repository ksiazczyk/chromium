// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App test utility declarations for ARC apps and extensions
// summary: Declares helper functions to create ARC app packages, ARC app info, and Chrome extensions for use in tests.
// ---

#ifndef CHROME_BROWSER_ASH_CHILD_ACCOUNTS_APPS_APP_TEST_UTILS_H_
#define CHROME_BROWSER_ASH_CHILD_ACCOUNTS_APPS_APP_TEST_UTILS_H_

#include <memory>

#include "base/memory/scoped_refptr.h"
#include "chromeos/ash/experiences/arc/mojom/app.mojom.h"

namespace extensions {
class Extension;
}  // namespace extensions

namespace ash {

arc::mojom::ArcPackageInfoPtr CreateArcAppPackage(
    const std::string& package_name);

arc::mojom::AppInfoPtr CreateArcAppInfo(const std::string& package_name,
                                        const std::string& name);

scoped_refptr<extensions::Extension> CreateExtension(
    const std::string& extension_id,
    const std::string& name,
    const std::string& url);

}  // namespace ash

#endif  // CHROME_BROWSER_ASH_CHILD_ACCOUNTS_APPS_APP_TEST_UTILS_H_
