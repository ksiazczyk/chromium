// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for the Clear Key CDM access class
// summary: Declares the MediaFoundationClearKeyCdmAccess runtime class implementing IMFContentDecryptionModuleAccess, with a thread checker for MF work queue calls.
// ---

#ifndef MEDIA_CDM_WIN_TEST_MEDIA_FOUNDATION_CLEAR_KEY_CDM_ACCESS_H_
#define MEDIA_CDM_WIN_TEST_MEDIA_FOUNDATION_CLEAR_KEY_CDM_ACCESS_H_

#include <mfcontentdecryptionmodule.h>
#include <mfidl.h>
#include <wrl/client.h>
#include <wrl/implements.h>

#include "base/threading/thread_checker.h"

namespace media {

class MediaFoundationClearKeyCdmAccess final
    : public Microsoft::WRL::RuntimeClass<
          Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::ClassicCom>,
          IMFContentDecryptionModuleAccess,
          Microsoft::WRL::FtmBase> {
 public:
  MediaFoundationClearKeyCdmAccess();
  MediaFoundationClearKeyCdmAccess(const MediaFoundationClearKeyCdmAccess&) =
      delete;
  MediaFoundationClearKeyCdmAccess& operator=(
      const MediaFoundationClearKeyCdmAccess&) = delete;
  ~MediaFoundationClearKeyCdmAccess() override;

  HRESULT RuntimeClassInitialize();

  // IMFContentDecryptionModuleAccess
  STDMETHODIMP CreateContentDecryptionModule(
      _In_opt_ IPropertyStore* properties,
      _COM_Outptr_ IMFContentDecryptionModule** cdm) override;
  STDMETHODIMP GetConfiguration(_COM_Outptr_ IPropertyStore** config) override;
  STDMETHODIMP GetKeySystem(_COM_Outptr_ LPWSTR* key_system) override;

 private:
  // Thread checker to enforce that this object is used on a specific thread.
  // Some methods may get called from MF work queue threads.
  THREAD_CHECKER(thread_checker_);
};

}  // namespace media

#endif  // MEDIA_CDM_WIN_TEST_MEDIA_FOUNDATION_CLEAR_KEY_CDM_ACCESS_H_
