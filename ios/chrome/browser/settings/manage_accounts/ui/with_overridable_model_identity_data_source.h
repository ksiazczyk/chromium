// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WithOverridableModelIdentityDataSource protocol header
// summary: Declares a protocol exposing a settable, weak modelIdentityDataSource property for overriding the manage accounts identity data source.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_MANAGE_ACCOUNTS_UI_WITH_OVERRIDABLE_MODEL_IDENTITY_DATA_SOURCE_H_
#define IOS_CHROME_BROWSER_SETTINGS_MANAGE_ACCOUNTS_UI_WITH_OVERRIDABLE_MODEL_IDENTITY_DATA_SOURCE_H_

@protocol ManageAccountsModelIdentityDataSource;

// Protocol exposing a settable property -modelIdentityDataSource.
@protocol WithOverridableModelIdentityDataSource

@property(nonatomic, weak) id<ManageAccountsModelIdentityDataSource>
    modelIdentityDataSource;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_MANAGE_ACCOUNTS_UI_WITH_OVERRIDABLE_MODEL_IDENTITY_DATA_SOURCE_H_
