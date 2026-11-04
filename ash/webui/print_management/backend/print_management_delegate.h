// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Print management delegate interface
// summary: Declares the PrintManagementDelegate interface used to launch printer settings from the print management UI.
// ---

#ifndef ASH_WEBUI_PRINT_MANAGEMENT_BACKEND_PRINT_MANAGEMENT_DELEGATE_H_
#define ASH_WEBUI_PRINT_MANAGEMENT_BACKEND_PRINT_MANAGEMENT_DELEGATE_H_

namespace ash::printing::printing_manager {

class PrintManagementDelegate {
 public:
  virtual ~PrintManagementDelegate() = default;

  virtual void LaunchPrinterSettings() = 0;
};

}  // namespace ash::printing::printing_manager

#endif  // ASH_WEBUI_PRINT_MANAGEMENT_BACKEND_PRINT_MANAGEMENT_DELEGATE_H_
