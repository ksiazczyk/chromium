// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PPD provider factory header
// summary: Declares CreatePpdProvider, which builds a PpdProvider for a profile and URL loader factory.
// ---

#ifndef CHROME_BROWSER_ASH_PRINTING_PPD_PROVIDER_FACTORY_H_
#define CHROME_BROWSER_ASH_PRINTING_PPD_PROVIDER_FACTORY_H_

#include <memory>

#include "base/memory/scoped_refptr.h"

class Profile;

namespace chromeos {
class PpdProvider;
}  // namespace chromeos

namespace network {
class SharedURLLoaderFactory;
}  // namespace network

namespace ash {

// `url_loader_factory` must be non-null.
std::unique_ptr<chromeos::PpdProvider> CreatePpdProvider(
    scoped_refptr<network::SharedURLLoaderFactory> url_loader_factory,
    Profile* profile);

}  // namespace ash

#endif  // CHROME_BROWSER_ASH_PRINTING_PPD_PROVIDER_FACTORY_H_
