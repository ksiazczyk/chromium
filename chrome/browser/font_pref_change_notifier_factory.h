// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Font pref change notifier factory declaration
// summary: Declares FontPrefChangeNotifierFactory, the keyed service factory providing per-profile access to the font preference change notifier.
// ---

#ifndef CHROME_BROWSER_FONT_PREF_CHANGE_NOTIFIER_FACTORY_H_
#define CHROME_BROWSER_FONT_PREF_CHANGE_NOTIFIER_FACTORY_H_

#include "base/no_destructor.h"
#include "chrome/browser/profiles/profile_keyed_service_factory.h"

class FontPrefChangeNotifier;
class Profile;

// Keyed service factory for a FontPrefChangeNotifier.
class FontPrefChangeNotifierFactory : public ProfileKeyedServiceFactory {
 public:
  static FontPrefChangeNotifier* GetForProfile(Profile* profile);

  static FontPrefChangeNotifierFactory* GetInstance();

 private:
  friend base::NoDestructor<FontPrefChangeNotifierFactory>;

  FontPrefChangeNotifierFactory();
  ~FontPrefChangeNotifierFactory() override;

  // BrowserContextKeyedServiceFactory overrides:
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* context) const override;
};

#endif  // CHROME_BROWSER_FONT_PREF_CHANGE_NOTIFIER_FACTORY_H_
