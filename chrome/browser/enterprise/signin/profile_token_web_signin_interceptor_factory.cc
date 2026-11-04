// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Profile token web signin interceptor factory
// summary: Implements the keyed service factory that provides a ProfileTokenWebSigninInterceptor per profile for intercepting web sign-ins with profile tokens.
// ---

#include "chrome/browser/enterprise/signin/profile_token_web_signin_interceptor_factory.h"

#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/enterprise/signin/profile_token_web_signin_interceptor.h"
#include "chrome/browser/ui/signin/dice_web_signin_interceptor_delegate.h"

// static
ProfileTokenWebSigninInterceptor*
ProfileTokenWebSigninInterceptorFactory::GetForProfile(Profile* profile) {
  return static_cast<ProfileTokenWebSigninInterceptor*>(
      GetInstance()->GetServiceForBrowserContext(profile, true));
}

//  static
ProfileTokenWebSigninInterceptorFactory*
ProfileTokenWebSigninInterceptorFactory::GetInstance() {
  static base::NoDestructor<ProfileTokenWebSigninInterceptorFactory> instance;
  return instance.get();
}

ProfileTokenWebSigninInterceptorFactory::
    ProfileTokenWebSigninInterceptorFactory()
    : ProfileKeyedServiceFactory("ProfileTokenWebSigninInterceptor") {}

ProfileTokenWebSigninInterceptorFactory::
    ~ProfileTokenWebSigninInterceptorFactory() = default;

std::unique_ptr<KeyedService>
ProfileTokenWebSigninInterceptorFactory::BuildServiceInstanceForBrowserContext(
    content::BrowserContext* context) const {
  return std::make_unique<ProfileTokenWebSigninInterceptor>(
      Profile::FromBrowserContext(context),
      std::make_unique<DiceWebSigninInterceptorDelegate>());
}
