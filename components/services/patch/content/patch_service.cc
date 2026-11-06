// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Patch service implementation
// summary: Implements LaunchFilePatcher, which launches the FilePatcher mojom interface in a sandboxed service process via ServiceProcessHost and returns its Mojo remote.
// ---

#include "components/services/patch/content/patch_service.h"

#include "components/services/patch/public/mojom/file_patcher.mojom.h"
#include "components/strings/grit/components_strings.h"
#include "content/public/browser/service_process_host.h"

namespace patch {

mojo::PendingRemote<mojom::FilePatcher> LaunchFilePatcher() {
  mojo::PendingRemote<mojom::FilePatcher> remote;
  content::ServiceProcessHost::Launch<mojom::FilePatcher>(
      remote.InitWithNewPipeAndPassReceiver(),
      content::ServiceProcessHost::Options()
          .WithDisplayName(IDS_PATCH_SERVICE_DISPLAY_NAME)
          .Pass());
  return remote;
}

}  //  namespace patch
