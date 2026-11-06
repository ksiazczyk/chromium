// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tachyon request header utils
// summary: Declares GetRequestHeaderTemplate, a helper that returns a request header template for Tachyon requests in the BabelOrca feature.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_BOCA_BABELORCA_TACHYON_UTILS_H_
#define CHROMEOS_ASH_COMPONENTS_BOCA_BABELORCA_TACHYON_UTILS_H_

namespace ash::babelorca {

class RequestHeader;

RequestHeader GetRequestHeaderTemplate();

}  // namespace ash::babelorca

#endif  // CHROMEOS_ASH_COMPONENTS_BOCA_BABELORCA_TACHYON_UTILS_H_
