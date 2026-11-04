// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IDispatch test stub declaration
// summary: Declares DispatchStub, an unimplemented IDispatch runtime class in the base::win::test namespace for use in tests.
// ---

#ifndef BASE_WIN_DISPATCH_STUB_H_
#define BASE_WIN_DISPATCH_STUB_H_

#include <wrl/client.h>
#include <wrl/implements.h>

namespace base {
namespace win {
namespace test {

// An unimplemented IDispatch subclass for testing purposes.
class DispatchStub
    : public Microsoft::WRL::RuntimeClass<
          Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::ClassicCom>,
          IDispatch> {
 public:
  DispatchStub() = default;
  DispatchStub(const DispatchStub&) = delete;
  DispatchStub& operator=(const DispatchStub&) = delete;

  // IDispatch:
  IFACEMETHODIMP GetTypeInfoCount(UINT*) override;
  IFACEMETHODIMP GetTypeInfo(UINT, LCID, ITypeInfo**) override;
  IFACEMETHODIMP GetIDsOfNames(REFIID, LPOLESTR*, UINT, LCID, DISPID*) override;
  IFACEMETHODIMP Invoke(DISPID,
                        REFIID,
                        LCID,
                        WORD,
                        DISPPARAMS*,
                        VARIANT*,
                        EXCEPINFO*,
                        UINT*) override;
};

}  // namespace test
}  // namespace win
}  // namespace base

#endif  // BASE_WIN_DISPATCH_STUB_H_
