// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Answers typography helpers implementation
// summary: Implements helpers that resolve Ash typography tokens into font lists and line heights for the first and second lines of Quick Answers views.
// ---

#include "chrome/browser/ui/ash/quick_answers/ui/typography.h"

#include "ash/style/typography.h"
#include "ui/gfx/font_list.h"

namespace quick_answers {

namespace {

}  // namespace

const gfx::FontList GetFirstLineFontList() {
  return ash::TypographyProvider::Get()->ResolveTypographyToken(
      ash::TypographyToken::kCrosHeadline1);
}

int GetFirstLineHeight() {
  return ash::TypographyProvider::Get()->ResolveLineHeight(
      ash::TypographyToken::kCrosHeadline1);
}

const gfx::FontList GetSecondLineFontList() {
  return ash::TypographyProvider::Get()->ResolveTypographyToken(
      ash::TypographyToken::kCrosAnnotation1);
}

int GetSecondLineHeight() {
  return ash::TypographyProvider::Get()->ResolveLineHeight(
      ash::TypographyToken::kCrosAnnotation1);
}

}  // namespace quick_answers
