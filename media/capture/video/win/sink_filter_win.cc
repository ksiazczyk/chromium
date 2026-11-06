// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DirectShow sink filter implementation
// summary: Implements SinkFilter, a DirectShow filter with a single input pin that forwards the requested media format to the pin and exposes its class ID.
// ---

#include "media/capture/video/win/sink_filter_win.h"

#include "base/memory/scoped_refptr.h"
#include "media/capture/video/win/sink_input_pin_win.h"

namespace media {

SinkFilterObserver::~SinkFilterObserver() {
}

SinkFilter::SinkFilter(SinkFilterObserver* observer) {
  input_pin_ = base::MakeRefCounted<SinkInputPin>(this, observer);
}

void SinkFilter::SetRequestedMediaFormat(VideoPixelFormat pixel_format,
                                         float frame_rate,
                                         const BITMAPINFOHEADER& info_header) {
  input_pin_->SetRequestedMediaFormat(pixel_format, frame_rate, info_header);
}

size_t SinkFilter::NoOfPins() {
  return 1;
}

IPin* SinkFilter::GetPin(int index) {
  return index == 0 ? input_pin_.get() : nullptr;
}

HRESULT SinkFilter::GetClassID(CLSID* clsid) {
  *clsid = __uuidof(SinkFilter);
  return S_OK;
}

SinkFilter::~SinkFilter() {
  input_pin_->SetOwner(nullptr);
}

}  // namespace media
