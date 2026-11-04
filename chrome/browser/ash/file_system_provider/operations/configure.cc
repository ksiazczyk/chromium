// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Configure operation implementation
// summary: Implements the Configure operation that forwards fileManagerPrivate configure requests to the providing extension and reports success or error via callback.
// ---

#include "chrome/browser/ash/file_system_provider/operations/configure.h"

#include "base/values.h"
#include "chromeos/ash/experiences/extensions/common/api/file_system_provider.h"

namespace ash::file_system_provider::operations {

Configure::Configure(RequestDispatcher* dispatcher,
                     const ProvidedFileSystemInfo& file_system_info,
                     storage::AsyncFileUtil::StatusCallback callback)
    : Operation(dispatcher, file_system_info), callback_(std::move(callback)) {}

Configure::~Configure() = default;

bool Configure::Execute(int request_id) {
  using extensions::api::file_system_provider::ConfigureRequestedOptions;

  ConfigureRequestedOptions options;
  options.file_system_id = file_system_info_.file_system_id();
  options.request_id = request_id;

  auto event_args = base::MakeRefCounted<extensions::EventArgs>(
      extensions::api::file_system_provider::OnConfigureRequested::Create(
          options));
  return SendEvent(
      request_id,
      extensions::events::FILE_SYSTEM_PROVIDER_ON_CONFIGURE_REQUESTED,
      extensions::api::file_system_provider::OnConfigureRequested::kEventName,
      std::move(event_args));
}

void Configure::OnSuccess(/*request_id=*/int,
                          /*result=*/const RequestValue&,
                          /*has_more=*/bool) {
  CHECK(callback_, base::NotFatalUntil::M160);
  std::move(callback_).Run(base::File::FILE_OK);
}

void Configure::OnError(/*request_id=*/int,
                        /*result=*/const RequestValue&,
                        base::File::Error error) {
  CHECK(callback_, base::NotFatalUntil::M160);
  std::move(callback_).Run(error);
}

}  // namespace ash::file_system_provider::operations
