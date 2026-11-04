// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android geolocation permission delegate header
// summary: Declares the Android subclass overriding permission decisions, interactability checks, preference access and requesting-origin DSE detection.
// ---

#ifndef CHROME_BROWSER_GEOLOCATION_GEOLOCATION_PERMISSION_CONTEXT_DELEGATE_ANDROID_H_
#define CHROME_BROWSER_GEOLOCATION_GEOLOCATION_PERMISSION_CONTEXT_DELEGATE_ANDROID_H_

#include "chrome/browser/geolocation/geolocation_permission_context_delegate.h"
#include "content/public/browser/browser_context.h"

class GeolocationPermissionContextDelegateAndroid
    : public GeolocationPermissionContextDelegate {
 public:
  explicit GeolocationPermissionContextDelegateAndroid(Profile* profile);

  GeolocationPermissionContextDelegateAndroid(
      const GeolocationPermissionContextDelegateAndroid&) = delete;
  GeolocationPermissionContextDelegateAndroid& operator=(
      const GeolocationPermissionContextDelegateAndroid&) = delete;

  ~GeolocationPermissionContextDelegateAndroid() override;

  // GeolocationPermissionContext::Delegate:
  bool DecidePermission(
      const permissions::PermissionRequestData& request_data,
      permissions::BrowserPermissionCallback* callback,
      permissions::GeolocationPermissionContext* context) override;

  bool IsInteractable(content::WebContents* web_contents) override;
  PrefService* GetPrefs(content::BrowserContext* browser_context) override;
  bool IsRequestingOriginDSE(content::BrowserContext* browser_context,
                             const GURL& requesting_origin) override;
};

#endif  // CHROME_BROWSER_GEOLOCATION_GEOLOCATION_PERMISSION_CONTEXT_DELEGATE_ANDROID_H_
