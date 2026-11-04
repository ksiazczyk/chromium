// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Save to Drive utilities implementation
// summary: Implements helpers for stream container lookup, tab id retrieval, PDF magic byte validation, and ensuring the .pdf file extension.
// ---

#include "chrome/browser/save_to_drive/save_to_drive_utils.h"

#include <string_view>

#include "base/files/file_path.h"
#include "base/memory/weak_ptr.h"
#include "base/strings/string_view_util.h"
#include "chrome/common/extensions/api/tabs.h"
#include "extensions/browser/guest_view/mime_handler_view/mime_handler_view_guest.h"
#include "extensions/browser/mime_handler/mime_handler_stream_manager.h"
#include "extensions/browser/mime_handler/stream_container.h"
#include "pdf/pdf_features.h"

namespace save_to_drive {

base::WeakPtr<extensions::StreamContainer> GetStreamWeakPtr(
    content::RenderFrameHost* render_frame_host) {
  if (!chrome_pdf::features::IsOopifPdfEnabled()) {
    auto* guest_view = extensions::MimeHandlerViewGuest::FromRenderFrameHost(
        render_frame_host);
    return guest_view ? guest_view->GetStreamWeakPtr() : nullptr;
  }
  if (!render_frame_host) {
    return nullptr;
  }
  content::RenderFrameHost* embedder_host = render_frame_host->GetParent();
  auto* manager =
      extensions::mime_handler::MimeHandlerStreamManager::FromRenderFrameHost(
          embedder_host);
  return manager ? manager->GetStreamContainer(embedder_host) : nullptr;
}

int GetTabId(content::RenderFrameHost* render_frame_host) {
  auto stream = GetStreamWeakPtr(render_frame_host);
  return stream ? stream->tab_id() : extensions::api::tabs::TAB_ID_NONE;
}

bool ValidatePdfMagic(const mojo_base::BigBuffer& buffer) {
  if (buffer.size() == 0) {
    return false;
  }
  static constexpr std::string_view kPdfMagic = "%PDF-";
  std::string_view content = base::as_string_view(buffer);
  return content.starts_with(kPdfMagic);
}

std::u16string EnsurePdfExtension(const std::u16string& title) {
  static constexpr base::FilePath::StringViewType kPdfExtensionFilePath =
      FILE_PATH_LITERAL(".pdf");
  base::FilePath file_path = base::FilePath::FromUTF16Unsafe(title);
  file_path = file_path.RemoveExtension().AddExtension(kPdfExtensionFilePath);
  return file_path.AsUTF16Unsafe();
}

}  // namespace save_to_drive
