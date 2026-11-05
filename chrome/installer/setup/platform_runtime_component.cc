// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome Platform Runtime component implementation
// summary: Implements the Chrome Platform Runtime inner component, validating its manifest name and resolving its CRX-ID destination directory.
// ---

#include "chrome/installer/setup/platform_runtime_component.h"

#include <memory>
#include <string>
#include <string_view>

#include "base/files/file_path.h"
#include "base/logging.h"
#include "base/values.h"
#include "chrome/installer/setup/installer_state.h"

namespace installer {

namespace {

// The name of the component in its manifest.
constexpr char kManifestName[] = "Chrome Platform Runtime (Inner)";

}  // namespace

// static
std::unique_ptr<PlatformRuntimeComponent> PlatformRuntimeComponent::Create(
    const base::CommandLine& command_line,
    const InstallerState& installer_state) {
  return std::make_unique<PlatformRuntimeComponent>();
}

PlatformRuntimeComponent::PlatformRuntimeComponent() = default;

PlatformRuntimeComponent::~PlatformRuntimeComponent() = default;

bool PlatformRuntimeComponent::ReadManifest(const base::DictValue& manifest) {
  const std::string* name = manifest.FindString("name");
  if (!name || *name != kManifestName) {
    LOG(ERROR) << "Component manifest name mismatch. Expected: "
               << kManifestName << ", actual: " << (name ? *name : "(missing)");
    return false;
  }
  return true;
}

base::expected<base::FilePath, InstallStatus>
PlatformRuntimeComponent::DetermineDestinationRoot(
    const InstallerState& installer_state,
    std::string_view crx_id) {
  return installer_state.target_path().Append(
      base::FilePath::FromASCII(crx_id));
}

bool PlatformRuntimeComponent::InitializeDestinationRoot(
    const InstallerState& installer_state,
    const base::FilePath& destination_root) {
  return true;
}

}  // namespace installer
