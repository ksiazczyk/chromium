// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NSObject description utilities header
// summary: 'Declares CWVPropertiesDescription, a helper that builds a string listing each declared property of an object as "<key>: <value>" lines.'
// ---

#ifndef IOS_WEB_VIEW_INTERNAL_UTILS_NSOBJECT_DESCRIPTION_UTILS_H_
#define IOS_WEB_VIEW_INTERNAL_UTILS_NSOBJECT_DESCRIPTION_UTILS_H_

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// Builds a string where each line represents a declared property of |object|
// and formatted as "<key>: <value>".
NSString* CWVPropertiesDescription(id object);

NS_ASSUME_NONNULL_END

#endif  // IOS_WEB_VIEW_INTERNAL_UTILS_NSOBJECT_DESCRIPTION_UTILS_H_
