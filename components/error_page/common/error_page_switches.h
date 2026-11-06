// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Defines all the command-line switches used by //components/error_page.

// ---docerion
// type: source
// title: Error page command-line switches header
// summary: Declares the command-line switches for the error_page component, including toggles for the dinosaur easter egg and its alternate game images.
// ---

#ifndef COMPONENTS_ERROR_PAGE_COMMON_ERROR_PAGE_SWITCHES_H_
#define COMPONENTS_ERROR_PAGE_COMMON_ERROR_PAGE_SWITCHES_H_

namespace error_page {
namespace switches {

extern const char kDisableDinosaurEasterEgg[];
extern const char kEnableDinosaurEasterEggAltGameImages[];

}  // namespace switches
}  // namespace error_page

#endif  // COMPONENTS_ERROR_PAGE_COMMON_ERROR_PAGE_SWITCHES_H_
