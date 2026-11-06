// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AIM SRP debugger URL parameter cell interface
// summary: Declares a table view cell that displays and edits URL query parameters in the AIM SRP debugger.
// ---

#ifndef IOS_CHROME_BROWSER_COBROWSE_DEBUGGER_AIM_SRP_DEBUGGER_URL_PARAM_CELL_H_
#define IOS_CHROME_BROWSER_COBROWSE_DEBUGGER_AIM_SRP_DEBUGGER_URL_PARAM_CELL_H_

#import <UIKit/UIKit.h>

// Cell to display and edit query parameters.
@interface AIMSRPDebuggerURLParamCell : UITableViewCell

@property(nonatomic, readonly) UITextField* keyField;
@property(nonatomic, readonly) UITextView* valueField;

@end

#endif  // IOS_CHROME_BROWSER_COBROWSE_DEBUGGER_AIM_SRP_DEBUGGER_URL_PARAM_CELL_H_
