// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: hello.h
// summary: Header declaring the Hello() greeting functions, with a two-argument overload guarded by the TWO_PEOPLE define.
// ---

#ifndef TOOLS_GN_TUTORIAL_HELLO_H_
#define TOOLS_GN_TUTORIAL_HELLO_H_

void Hello(const char* who);

#if defined(TWO_PEOPLE)
void Hello(const char* one, const char* two);
#endif

#endif  // TOOLS_GN_TUTORIAL_HELLO_H_
