// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Windows.h test header for Clang plugin system tests
// summary: Test fixture header defining Windows-style macros such as STDMETHOD, END_COM_MAP, and redundant virtual specifiers used as input for the Clang plugin system tests.
// ---

#ifndef TOOLS_CLANG_PLUGINS_TESTS_SYSTEM_WINDOWS_H_
#define TOOLS_CLANG_PLUGINS_TESTS_SYSTEM_WINDOWS_H_

#define STDMETHOD(x) virtual void x

#define END_COM_MAP() virtual void AddRef() = 0;

#define SYSTEM_REDUNDANT1 virtual void NonVirtualFinal() final
#define SYSTEM_REDUNDANT2 virtual void Virtual() override final

#define SYSTEM_INLINE_VIRTUAL virtual int Foo() { return 4; }

#endif  // TOOLS_CLANG_PLUGINS_TESTS_SYSTEM_WINDOWS_H_
