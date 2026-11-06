// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Service executable entry point
// summary: Implements wWinMain that runs the elevated tracing service through ServiceProgramMain with the service delegate.
// ---

#include "chrome/windows_services/elevated_tracing_service/elevated_tracing_service_delegate.h"
#include "chrome/windows_services/service_program/service_program_main.h"

extern "C" int WINAPI wWinMain(HINSTANCE /*instance*/,
                               HINSTANCE /*prev_instance*/,
                               wchar_t* /*command_line*/,
                               int /*show_command*/) {
  elevated_tracing_service::Delegate delegate;

  return ServiceProgramMain(delegate);
}
