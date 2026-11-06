// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Ink annotation mode enum
// summary: 'Defines the InkAnnotationMode enum listing the supported annotation types: off, draw, text, and signature.'
// ---

#ifndef PDF_PDF_INK_ANNOTATION_MODE_H_
#define PDF_PDF_INK_ANNOTATION_MODE_H_

namespace chrome_pdf {

// Types of annotations supported.
enum class InkAnnotationMode { kOff, kDraw, kText, kSignature };

}  // namespace chrome_pdf

#endif  // PDF_PDF_INK_ANNOTATION_MODE_H_
