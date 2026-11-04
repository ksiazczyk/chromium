// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Forward declarations for callback types
// summary: Forward declares OnceCallback and RepeatingCallback and provides OnceClosure and RepeatingClosure aliases for lightweight inclusion.
// ---

#ifndef BASE_FUNCTIONAL_CALLBACK_FORWARD_H_
#define BASE_FUNCTIONAL_CALLBACK_FORWARD_H_

namespace base {

template <typename Signature>
class OnceCallback;

template <typename Signature>
class RepeatingCallback;

// Syntactic sugar to make OnceClosure<void()> and RepeatingClosure<void()>
// easier to declare since they will be used in a lot of APIs with delayed
// execution.
using OnceClosure = OnceCallback<void()>;
using RepeatingClosure = RepeatingCallback<void()>;

}  // namespace base

#endif  // BASE_FUNCTIONAL_CALLBACK_FORWARD_H_
