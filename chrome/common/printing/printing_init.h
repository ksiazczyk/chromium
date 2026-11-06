// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Printing process initialization header
// summary: Declares the printing namespace function InitializeProcessForPrinting for process-level initialization of the printing subsystem.
// ---

#ifndef CHROME_COMMON_PRINTING_PRINTING_INIT_H_
#define CHROME_COMMON_PRINTING_PRINTING_INIT_H_

namespace printing {

// Do process-level initialization of printing subsystem.
void InitializeProcessForPrinting();

}  // namespace printing

#endif  // CHROME_COMMON_PRINTING_PRINTING_INIT_H_
