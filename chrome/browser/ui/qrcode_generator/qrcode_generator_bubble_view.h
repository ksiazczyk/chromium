// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: QR code generator bubble view interface
// summary: Declares the abstract interface for a QR code generator bubble that can hide itself and manages its own lifetime.
// ---

#ifndef CHROME_BROWSER_UI_QRCODE_GENERATOR_QRCODE_GENERATOR_BUBBLE_VIEW_H_
#define CHROME_BROWSER_UI_QRCODE_GENERATOR_QRCODE_GENERATOR_BUBBLE_VIEW_H_

namespace qrcode_generator {

// Interface to display a QR Code Generator bubble.
// This object is responsible for its own lifetime.
class QRCodeGeneratorBubbleView {
 public:
  virtual ~QRCodeGeneratorBubbleView() = default;

  // Closes the bubble and prevents future calls into the controller.
  virtual void Hide() = 0;
};

}  // namespace qrcode_generator

#endif  // CHROME_BROWSER_UI_QRCODE_GENERATOR_QRCODE_GENERATOR_BUBBLE_VIEW_H_
