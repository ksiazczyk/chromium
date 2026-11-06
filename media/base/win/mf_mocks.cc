// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Media Foundation mock implementations
// summary: Implements gmock-based COM mock classes for Media Foundation CDM, media source and PMP host interfaces used in tests.
// ---

#include "media/base/win/mf_mocks.h"

namespace media {

MockMFCdmFactory::MockMFCdmFactory() = default;
MockMFCdmFactory::~MockMFCdmFactory() = default;

MockMFCdmAccess::MockMFCdmAccess() = default;
MockMFCdmAccess::~MockMFCdmAccess() = default;

MockMFCdm::MockMFCdm() = default;
MockMFCdm::~MockMFCdm() = default;

MockMFCdmSession::MockMFCdmSession() = default;
MockMFCdmSession::~MockMFCdmSession() = default;

MockMFExtendedDRMTypeSupport::MockMFExtendedDRMTypeSupport() = default;
MockMFExtendedDRMTypeSupport::~MockMFExtendedDRMTypeSupport() = default;

MockMFGetService::MockMFGetService() = default;
MockMFGetService::~MockMFGetService() = default;

MockMFPMPHost::MockMFPMPHost() = default;
MockMFPMPHost::~MockMFPMPHost() = default;

MockMFPMPHostApp::MockMFPMPHostApp() = default;
MockMFPMPHostApp::~MockMFPMPHostApp() = default;

MockMFMediaSource::MockMFMediaSource() = default;
MockMFMediaSource::~MockMFMediaSource() = default;

MockMediaFoundationCdmProxy::MockMediaFoundationCdmProxy() = default;
MockMediaFoundationCdmProxy::~MockMediaFoundationCdmProxy() = default;

}  // namespace media
