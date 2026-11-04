// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Trusted CDN header
// summary: Declares the TrustedCdn class, the native side of the Trusted CDN publisher URL provider managed by the Java layer.
// ---

#ifndef CHROME_BROWSER_ANDROID_TRUSTED_CDN_H_
#define CHROME_BROWSER_ANDROID_TRUSTED_CDN_H_

#include "base/memory/raw_ptr.h"
#include "content/public/browser/web_contents.h"
#include "url/gurl.h"

// Native part of Trusted CDN publisher URL provider. Managed by Java layer.
class TrustedCdn {
 public:
  TrustedCdn();
  ~TrustedCdn();

  void SetWebContents(content::WebContents* web_contents);
  void ResetWebContents();
  void OnDestroyed();
  GURL GetPublisherUrl();

 private:
  raw_ptr<content::WebContents> web_contents_;
};

#endif  // CHROME_BROWSER_ANDROID_TRUSTED_CDN_H_
