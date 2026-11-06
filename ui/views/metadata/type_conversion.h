// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Type converter declarations for Background and Border
// summary: Declares TypeConverter specializations for Background and Border used by the views metadata type conversion machinery.
// ---

#ifndef UI_VIEWS_METADATA_TYPE_CONVERSION_H_
#define UI_VIEWS_METADATA_TYPE_CONVERSION_H_

#include <optional>
#include <string>

#include "base/notreached.h"
#include "ui/base/metadata/base_type_conversion.h"
#include "ui/views/background.h"
#include "ui/views/border.h"
#include "ui/views/views_export.h"

template <>
struct VIEWS_EXPORT ui::metadata::TypeConverter<views::Background>
    : BaseTypeConverter<true, true> {
  static std::u16string ToString(const views::Background& source_value);
};

template <>
struct VIEWS_EXPORT ui::metadata::TypeConverter<views::Border>
    : BaseTypeConverter<true, true> {
  static std::u16string ToString(const views::Border& source_value);
};

#endif  // UI_VIEWS_METADATA_TYPE_CONVERSION_H_
