// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped Windows thread environment base class
// summary: Declares an abstract base class that scoped Windows thread initializers such as COM and WinRT initializers derive from.
// ---

#ifndef BASE_WIN_SCOPED_WINDOWS_THREAD_ENVIRONMENT_H_
#define BASE_WIN_SCOPED_WINDOWS_THREAD_ENVIRONMENT_H_

namespace base {
namespace win {

// Serves as a root class for ScopedCOMInitializer and ScopedWinrtInitializer.
class ScopedWindowsThreadEnvironment {
 public:
  ScopedWindowsThreadEnvironment() = default;

  ScopedWindowsThreadEnvironment(const ScopedWindowsThreadEnvironment&) =
      delete;
  ScopedWindowsThreadEnvironment& operator=(
      const ScopedWindowsThreadEnvironment&) = delete;

  virtual ~ScopedWindowsThreadEnvironment() = default;

  virtual bool Succeeded() const = 0;
};

}  // namespace win
}  // namespace base

#endif  // BASE_WIN_SCOPED_WINDOWS_THREAD_ENVIRONMENT_H_
