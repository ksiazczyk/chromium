// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BrowserNativeWidgetFactory implementation
// summary: Implements the static factory that creates platform-specific BrowserNativeWidget instances and allows replacing the factory, for example in tests.
// ---

#include "chrome/browser/ui/views/frame/browser_native_widget_factory.h"

#include "build/build_config.h"
#include "chrome/browser/ui/views/frame/browser_native_widget.h"

namespace {

BrowserNativeWidgetFactory* factory = nullptr;

}

// static
BrowserNativeWidget* BrowserNativeWidgetFactory::CreateBrowserNativeWidget(
    BrowserWidget* browser_widget,
    BrowserView* browser_view) {
  if (!factory) {
    factory = new BrowserNativeWidgetFactory;
  }
  return factory->Create(browser_widget, browser_view);
}

// static
void BrowserNativeWidgetFactory::Set(BrowserNativeWidgetFactory* new_factory) {
  delete factory;
  factory = new_factory;
}
