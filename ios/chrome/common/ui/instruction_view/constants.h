// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Instruction view accessibility identifier constants
// summary: Declares InstructionViewRowAccessibilityIdentifier, which provides an accessibility identifier for an instruction row at a given index.
// ---

#ifndef IOS_CHROME_COMMON_UI_INSTRUCTION_VIEW_CONSTANTS_H_
#define IOS_CHROME_COMMON_UI_INSTRUCTION_VIEW_CONSTANTS_H_

#import <UIKit/UIKit.h>

// Provides accessibility identifier for an instruction row at a given index.
extern NSString* InstructionViewRowAccessibilityIdentifier(int index);

#endif  // IOS_CHROME_COMMON_UI_INSTRUCTION_VIEW_CONSTANTS_H_
