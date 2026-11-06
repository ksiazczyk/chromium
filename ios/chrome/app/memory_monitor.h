// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Memory monitor header
// summary: Declares StartFreeMemoryMonitor, which starts periodic background tracking of free memory and disk space.
// ---

#ifndef IOS_CHROME_APP_MEMORY_MONITOR_H_
#define IOS_CHROME_APP_MEMORY_MONITOR_H_

// Starts the memory monitor that periodically updates the amount of free
// memory and free disk space in the background.
void StartFreeMemoryMonitor();

#endif  // IOS_CHROME_APP_MEMORY_MONITOR_H_
