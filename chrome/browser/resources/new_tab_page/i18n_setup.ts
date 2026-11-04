// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: I18n setup re-exports
// summary: Imports localized strings and re-exports the Lit i18n mixin and loadTimeData for use across the new tab page.
// ---

import '/strings.m.js';

export {I18nMixinLit} from 'chrome://resources/cr_elements/i18n_mixin_lit.js';
export {loadTimeData} from 'chrome://resources/js/load_time_data.js';
