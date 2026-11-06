// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Linux ptrace system header
// summary: Defines Arm pointer authentication key constants for ptrace when the system headers do not already provide them.
// ---

#ifndef SANDBOX_LINUX_SYSTEM_HEADERS_LINUX_PTRACE_H_
#define SANDBOX_LINUX_SYSTEM_HEADERS_LINUX_PTRACE_H_

#if !defined(NT_ARM_PACA_KEYS)
#define NT_ARM_PACA_KEYS 0x407 /* Arm pointer authentication address keys */
#define NT_ARM_PACG_KEYS 0x408 /* Arm pointer authentication generic key */
#endif

#endif  // SANDBOX_LINUX_SYSTEM_HEADERS_LINUX_PTRACE_H_
