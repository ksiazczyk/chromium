// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AIDA service handler
// summary: Declares AidaServiceHandler, a DevTools HTTP service handler that checks request eligibility and supplies the AIDA base URL, OAuth consumer ID and traffic annotation.
// ---

#ifndef CHROME_BROWSER_DEVTOOLS_AIDA_SERVICE_HANDLER_H_
#define CHROME_BROWSER_DEVTOOLS_AIDA_SERVICE_HANDLER_H_

#include "chrome/browser/devtools/devtools_http_service_handler.h"

class AidaServiceHandler : public DevToolsHttpServiceHandler {
 public:
  static const net::NetworkTrafficAnnotationTag& TrafficAnnotation();

  AidaServiceHandler();
  ~AidaServiceHandler() override;

 private:
  // DevToolsHttpServiceHandler overrides:
  void CanMakeRequest(Profile* profile,
                      base::OnceCallback<void(bool success)> callback) override;
  GURL BaseURL() const override;
  signin::OAuthConsumerId OAuthConsumerId() const override;
  net::NetworkTrafficAnnotationTag NetworkTrafficAnnotationTag() const override;
};

#endif  // CHROME_BROWSER_DEVTOOLS_AIDA_SERVICE_HANDLER_H_
