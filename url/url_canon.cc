// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CanonOutputT template instantiations
// summary: Defines the component-exported explicit template instantiations of CanonOutputT for char and char16_t.
// ---

#include "url/url_canon.h"

#include "base/component_export.h"

namespace url {

template class EXPORT_TEMPLATE_DEFINE(COMPONENT_EXPORT(URL)) CanonOutputT<char>;
template class EXPORT_TEMPLATE_DEFINE(COMPONENT_EXPORT(URL))
    CanonOutputT<char16_t>;

}  // namespace url
