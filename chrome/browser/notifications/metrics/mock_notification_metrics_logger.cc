// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock notification metrics logger implementation
// summary: Implements the test factory that creates MockNotificationMetricsLogger instances for use with the logger's testing factory.
// ---

#include "chrome/browser/notifications/metrics/mock_notification_metrics_logger.h"

#include "base/memory/ptr_util.h"

// static
std::unique_ptr<KeyedService> MockNotificationMetricsLogger::FactoryForTests(
    content::BrowserContext* context) {
  return base::WrapUnique(new MockNotificationMetricsLogger());
}

MockNotificationMetricsLogger::MockNotificationMetricsLogger() = default;
MockNotificationMetricsLogger::~MockNotificationMetricsLogger() = default;
