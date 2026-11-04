// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser main extra parts memory header
// summary: Declares ChromeBrowserMainExtraPartsMemory, which owns and initializes browser memory-related extra parts including the ChromeOS pressure evaluator.
// ---

#ifndef CHROME_BROWSER_MEMORY_CHROME_BROWSER_MAIN_EXTRA_PARTS_MEMORY_H_
#define CHROME_BROWSER_MEMORY_CHROME_BROWSER_MAIN_EXTRA_PARTS_MEMORY_H_

#include <memory>

#include "build/build_config.h"
#include "chrome/browser/chrome_browser_main_extra_parts.h"

#if BUILDFLAG(IS_CHROMEOS)
namespace ash {
namespace memory {
class SystemMemoryPressureEvaluator;
}
}  // namespace ash
#endif

// Wrapper that owns and initialize the browser memory-related extra parts.
class ChromeBrowserMainExtraPartsMemory : public ChromeBrowserMainExtraParts {
 public:
  ChromeBrowserMainExtraPartsMemory();

  ChromeBrowserMainExtraPartsMemory(const ChromeBrowserMainExtraPartsMemory&) =
      delete;
  ChromeBrowserMainExtraPartsMemory& operator=(
      const ChromeBrowserMainExtraPartsMemory&) = delete;

  ~ChromeBrowserMainExtraPartsMemory() override;

 private:
  // ChromeBrowserMainExtraParts overrides.
  void PostCreateThreads() override;
  void PostBrowserStart() override;
  void PostMainMessageLoopRun() override;

#if BUILDFLAG(IS_CHROMEOS)
  std::unique_ptr<ash::memory::SystemMemoryPressureEvaluator> cros_evaluator_;
#endif
};

#endif  // CHROME_BROWSER_MEMORY_CHROME_BROWSER_MAIN_EXTRA_PARTS_MEMORY_H_
