// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ARC app launch notifier implementation
// summary: Implements the ArcAppLaunchNotifier keyed service, providing factory access, observer management, and dispatch of ARC app launch request notifications.
// ---

#include "chromeos/ash/experiences/arc/app/arc_app_launch_notifier.h"

#include "base/no_destructor.h"

namespace arc {

// static
ArcAppLaunchNotifierFactory* ArcAppLaunchNotifierFactory::GetInstance() {
  static base::NoDestructor<ArcAppLaunchNotifierFactory> instance;
  return instance.get();
}

// static
ArcAppLaunchNotifier* ArcAppLaunchNotifier::GetForBrowserContext(
    content::BrowserContext* context) {
  return ArcAppLaunchNotifierFactory::GetForBrowserContext(context);
}

// static
ArcAppLaunchNotifier* ArcAppLaunchNotifier::GetForBrowserContextForTesting(
    content::BrowserContext* context) {
  return ArcAppLaunchNotifierFactory::GetForBrowserContextForTesting(context);
}

// static
void ArcAppLaunchNotifier::EnsureFactoryBuilt() {
  ArcAppLaunchNotifierFactory::GetInstance();
}

ArcAppLaunchNotifier::ArcAppLaunchNotifier(content::BrowserContext* context,
                                           ArcBridgeService* bridge_service) {}
ArcAppLaunchNotifier::~ArcAppLaunchNotifier() {
  for (Observer& observer : observers_) {
    observer.OnArcAppLaunchNotifierDestroy();
  }
}

void ArcAppLaunchNotifier::AddObserver(Observer* observer) {
  observers_.AddObserver(observer);
}

void ArcAppLaunchNotifier::RemoveObserver(Observer* observer) {
  observers_.RemoveObserver(observer);
}

void ArcAppLaunchNotifier::NotifyArcAppLaunchRequest(
    std::string_view identifier) {
  for (Observer& observer : observers_) {
    observer.OnArcAppLaunchRequested(identifier);
  }
}
}  // namespace arc
