// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IPC message Mojom traits implementation
// summary: Implements Mojo StructTraits that serialize IPC MessageView bytes and handles to and from the Message Mojom type.
// ---

#include "ipc/message_mojom_traits.h"

namespace mojo {

// static
base::span<const uint8_t>
StructTraits<IPC::mojom::MessageDataView, IPC::MessageView>::bytes(
    IPC::MessageView& view) {
  return view.bytes();
}

// static
std::optional<std::vector<mojo::native::SerializedHandlePtr>>
StructTraits<IPC::mojom::MessageDataView, IPC::MessageView>::handles(
    IPC::MessageView& view) {
  return view.TakeHandles();
}

// static
bool StructTraits<IPC::mojom::MessageDataView, IPC::MessageView>::Read(
    IPC::mojom::MessageDataView data,
    IPC::MessageView* out) {
  mojo::ArrayDataView<uint8_t> bytes;
  data.GetBytesDataView(&bytes);

  std::optional<std::vector<mojo::native::SerializedHandlePtr>> handles;
  if (!data.ReadHandles(&handles))
    return false;

  *out = IPC::MessageView(bytes, std::move(handles));
  return true;
}

}  // namespace mojo
