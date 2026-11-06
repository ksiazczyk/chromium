// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DirectComposition VSync thread class declaration
// summary: Declares VSyncThreadWinDComp, the VSyncThreadWin subclass that waits on the DirectComposition compositor clock and uses VSyncProviderWinDComp.
// ---

#ifndef UI_GL_VSYNC_THREAD_WIN_DCOMP_H_
#define UI_GL_VSYNC_THREAD_WIN_DCOMP_H_

#include "ui/gl/gl_export.h"
#include "ui/gl/vsync_provider_win_dcomp.h"
#include "ui/gl/vsync_thread_win.h"

namespace gl {
class GL_EXPORT VSyncThreadWinDComp final : public VSyncThreadWin {
 public:
  VSyncThreadWinDComp();

  VSyncThreadWinDComp(const VSyncThreadWinDComp&) = delete;
  VSyncThreadWinDComp& operator=(const VSyncThreadWinDComp&) = delete;

  // Returns the vsync interval via the Vsync provider.
  base::TimeDelta GetVsyncInterval() final;

  gfx::VSyncProvider* vsync_provider() final;

 protected:
  bool WaitForVSyncImpl(base::TimeDelta* vsync_interval) final;

 private:
  ~VSyncThreadWinDComp() final;

  // Used on vsync thread only after initialization.
  VSyncProviderWinDComp vsync_provider_;
};
}  // namespace gl

#endif  // UI_GL_VSYNC_THREAD_WIN_DCOMP_H_
