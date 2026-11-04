// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Supervised user icon and message header
// summary: Declares the ash namespace helpers for retrieving the supervised user icon and the localized supervised user message used by the Ash system UI.
// ---

#ifndef ASH_SYSTEM_SUPERVISED_SUPERVISED_ICON_STRING_H_
#define ASH_SYSTEM_SUPERVISED_SUPERVISED_ICON_STRING_H_

#include <string>


namespace gfx {
struct VectorIcon;
}  // namespace gfx

namespace ash {

const gfx::VectorIcon& GetSupervisedUserIcon();

std::u16string GetSupervisedUserMessage();

}  // namespace ash

#endif  // ASH_SYSTEM_SUPERVISED_SUPERVISED_ICON_STRING_H_
