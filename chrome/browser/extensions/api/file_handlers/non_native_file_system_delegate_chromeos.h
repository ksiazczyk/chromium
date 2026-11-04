// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome OS non-native file system delegate header
// summary: Declares the Chrome OS implementation of the NonNativeFileSystemDelegate interface used by the extension file handlers API.
// ---

#ifndef CHROME_BROWSER_EXTENSIONS_API_FILE_HANDLERS_NON_NATIVE_FILE_SYSTEM_DELEGATE_CHROMEOS_H_
#define CHROME_BROWSER_EXTENSIONS_API_FILE_HANDLERS_NON_NATIVE_FILE_SYSTEM_DELEGATE_CHROMEOS_H_

#include <optional>
#include <string>

#include "base/files/file_path.h"
#include "base/functional/callback.h"
#include "extensions/browser/api/file_handlers/non_native_file_system_delegate.h"

namespace content {
class BrowserContext;
}

namespace extensions {

class NonNativeFileSystemDelegateChromeOS
    : public extensions::NonNativeFileSystemDelegate {
 public:
  NonNativeFileSystemDelegateChromeOS();

  NonNativeFileSystemDelegateChromeOS(
      const NonNativeFileSystemDelegateChromeOS&) = delete;
  NonNativeFileSystemDelegateChromeOS& operator=(
      const NonNativeFileSystemDelegateChromeOS&) = delete;

  ~NonNativeFileSystemDelegateChromeOS() override;

  // extensions::NonNativeFileSystemDelegate:
  bool IsUnderNonNativeLocalPath(content::BrowserContext* context,
                                 const base::FilePath& path) override;
  bool HasNonNativeMimeTypeProvider(content::BrowserContext* context,
                                    const base::FilePath& path) override;
  void GetNonNativeLocalPathMimeType(
      content::BrowserContext* context,
      const base::FilePath& path,
      base::OnceCallback<void(const std::optional<std::string>&)> callback)
      override;
  void IsNonNativeLocalPathDirectory(
      content::BrowserContext* context,
      const base::FilePath& path,
      base::OnceCallback<void(bool)> callback) override;
  void PrepareNonNativeLocalFileForWritableApp(
      content::BrowserContext* context,
      const base::FilePath& path,
      base::OnceCallback<void(bool)> callback) override;
};

}  // namespace extensions

#endif  // CHROME_BROWSER_EXTENSIONS_API_FILE_HANDLERS_NON_NATIVE_FILE_SYSTEM_DELEGATE_CHROMEOS_H_
