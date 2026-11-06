// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for the updater self-update app
// summary: Declares MakeAppUpdate, the factory that creates the updater's self-update app.
// ---

#ifndef CHROME_UPDATER_APP_APP_UPDATE_H_
#define CHROME_UPDATER_APP_APP_UPDATE_H_

#include "base/memory/scoped_refptr.h"

namespace updater {

class App;

scoped_refptr<App> MakeAppUpdate();

}  // namespace updater

#endif  // CHROME_UPDATER_APP_APP_UPDATE_H_
