// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Swift XCTest for iOS build number via C++ interop
// summary: XCTest case that checks the iOS operating system build number returned through the Swift/C++ interop shim for base system info.
// ---

import CxxImports
import XCTest

class SysInfoTest: XCTestCase {

  func testIOSBuildNumber() {
    let cxxBuildNumber = base.swift.OperatingSystemBuildVersion()
    let buildNumber = String(cString: cxxBuildNumber.__c_strUnsafe())
    XCTAssertNotNil(buildNumber)
    XCTAssertNotEqual(buildNumber, "")
  }

}
