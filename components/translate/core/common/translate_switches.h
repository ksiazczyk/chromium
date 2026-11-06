// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Translate command-line switch declarations
// summary: Header declaring the command-line switch name constants used to override translate server, origin, ranker model, and forced translation settings.
// ---

#ifndef COMPONENTS_TRANSLATE_CORE_COMMON_TRANSLATE_SWITCHES_H_
#define COMPONENTS_TRANSLATE_CORE_COMMON_TRANSLATE_SWITCHES_H_

namespace translate {
namespace switches {

extern const char kTranslateScriptURL[];
extern const char kTranslateSecurityOrigin[];
extern const char kTranslateRankerModelURL[];
extern const char kForcedTranslateLanguage[];

}  // namespace switches
}  // namespace translate

#endif  // COMPONENTS_TRANSLATE_CORE_COMMON_TRANSLATE_SWITCHES_H_
