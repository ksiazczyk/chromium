// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page info previews coordinator header
// summary: Declares PageInfoPreviewsCoordinator, a wrapper for page info media preview initialization, interaction, and metrics collection.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_MEDIA_PREVIEW_PAGE_INFO_PREVIEWS_COORDINATOR_H_
#define CHROME_BROWSER_UI_VIEWS_MEDIA_PREVIEW_PAGE_INFO_PREVIEWS_COORDINATOR_H_

#include "chrome/browser/ui/views/media_preview/active_devices_media_coordinator.h"
#include "chrome/browser/ui/views/media_preview/media_coordinator.h"
#include "components/content_settings/core/common/content_settings_types.h"

namespace content {
class WebContents;
}  // namespace content

namespace views {
class View;
}  // namespace views

// Acts as a wrapper that encapsulates page info media previews initialization
// and interaction. Also, it helps with metrics collection.
class PageInfoPreviewsCoordinator {
 public:
  PageInfoPreviewsCoordinator(content::WebContents* web_contents,
                              ContentSettingsType content_settings_type,
                              views::View* parent_view);
  PageInfoPreviewsCoordinator(const PageInfoPreviewsCoordinator&) = delete;
  PageInfoPreviewsCoordinator& operator=(const PageInfoPreviewsCoordinator&) =
      delete;
  ~PageInfoPreviewsCoordinator();

  // Updates device ranking in Pref.
  void UpdateDevicePreferenceRanking();

  // Called when permission status gets updated (e.g. when camera / mic access
  // is revoked).
  void OnPermissionChange(bool has_permission);

  MediaCoordinator::ViewType GetViewTypeForTesting() const {
    return view_type_;
  }

 private:
  const MediaCoordinator::ViewType view_type_;
  std::optional<ActiveDevicesMediaCoordinator> active_devices_coordinator_;
  const media_preview_metrics::Context metrics_context_;
  base::TimeTicks media_preview_start_time_;
};

#endif  // CHROME_BROWSER_UI_VIEWS_MEDIA_PREVIEW_PAGE_INFO_PREVIEWS_COORDINATOR_H_
