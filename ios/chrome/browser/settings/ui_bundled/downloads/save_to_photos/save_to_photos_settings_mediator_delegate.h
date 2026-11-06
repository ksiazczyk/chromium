// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Save to Photos settings mediator delegate protocol
// summary: Defines the delegate protocol that lets the Save to Photos settings mediator request hiding the settings UI.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_DOWNLOADS_SAVE_TO_PHOTOS_SAVE_TO_PHOTOS_SETTINGS_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_DOWNLOADS_SAVE_TO_PHOTOS_SAVE_TO_PHOTOS_SETTINGS_MEDIATOR_DELEGATE_H_

// Protocol for the SaveToPhotosSettingsMediator delegate.
@protocol SaveToPhotosSettingsMediatorDelegate <NSObject>

// Called to hide Save to Photos settings.
- (void)hideSaveToPhotosSettings;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_DOWNLOADS_SAVE_TO_PHOTOS_SAVE_TO_PHOTOS_SETTINGS_MEDIATOR_DELEGATE_H_
