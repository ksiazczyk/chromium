// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JumpListFactory header
// summary: Declares the JumpListFactory keyed service factory and its GetForProfile accessor for obtaining a profile's JumpList.
// ---

#ifndef CHROME_BROWSER_WIN_JUMPLIST_FACTORY_H_
#define CHROME_BROWSER_WIN_JUMPLIST_FACTORY_H_

#include "base/no_destructor.h"
#include "chrome/browser/profiles/profile_keyed_service_factory.h"

class Profile;
class JumpList;

class JumpListFactory : public ProfileKeyedServiceFactory {
 public:
  static JumpList* GetForProfile(Profile* profile);

  static JumpListFactory* GetInstance();

 private:
  friend base::NoDestructor<JumpListFactory>;
  JumpListFactory();
  ~JumpListFactory() override;

  // BrowserContextKeyedServiceFactory:
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* context) const override;
};

#endif  // CHROME_BROWSER_WIN_JUMPLIST_FACTORY_H_
