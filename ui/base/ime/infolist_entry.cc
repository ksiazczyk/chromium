// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InfolistEntry implementation
// summary: Implements the InfolistEntry constructor that initializes title, body and highlight state for the infolist window data model.
// ---

#include "ui/base/ime/infolist_entry.h"

namespace ui {

InfolistEntry::InfolistEntry(const std::u16string& title,
                             const std::u16string& body)
    : title(title), body(body), highlighted(false) {}

}  // namespace ui
