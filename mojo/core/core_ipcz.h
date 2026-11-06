// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mojo ipcz implementation entry point
// summary: Declares GetMojoIpczImpl, which exposes the MojoSystemThunks2 table implementing the Mojo API over ipcz.
// ---

#ifndef MOJO_CORE_CORE_IPCZ_H_
#define MOJO_CORE_CORE_IPCZ_H_

#include "mojo/core/system_impl_export.h"
#include "mojo/public/c/system/thunks.h"

namespace mojo::core {

MOJO_SYSTEM_IMPL_EXPORT const MojoSystemThunks2* GetMojoIpczImpl();

}  // namespace mojo::core

#endif  // MOJO_CORE_CORE_IPCZ_H_
