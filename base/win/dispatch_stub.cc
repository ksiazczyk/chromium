// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IDispatch stub implementation
// summary: Implements an unimplemented IDispatch subclass whose methods all return E_NOTIMPL, provided as a stub for COM testing.
// ---

#include "base/win/dispatch_stub.h"

namespace base {
namespace win {
namespace test {

IFACEMETHODIMP DispatchStub::GetTypeInfoCount(UINT*) {
  return E_NOTIMPL;
}

IFACEMETHODIMP DispatchStub::GetTypeInfo(UINT, LCID, ITypeInfo**) {
  return E_NOTIMPL;
}

IFACEMETHODIMP DispatchStub::GetIDsOfNames(REFIID,
                                           LPOLESTR*,
                                           UINT,
                                           LCID,
                                           DISPID*) {
  return E_NOTIMPL;
}

IFACEMETHODIMP DispatchStub::Invoke(DISPID,
                                    REFIID,
                                    LCID,
                                    WORD,
                                    DISPPARAMS*,
                                    VARIANT*,
                                    EXCEPINFO*,
                                    UINT*) {
  return E_NOTIMPL;
}

}  // namespace test
}  // namespace win
}  // namespace base
