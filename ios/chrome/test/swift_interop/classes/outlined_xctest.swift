// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: XCTest for outlined C++ class in Swift
// summary: XCTest case verifying calls to the outlined C++ class from Swift, including its initial-value constructor.
// ---

import CxxImports
import UIKit
import XCTest

class OutlinedClassTest: XCTestCase {

  func testOutlined() throws {
    var outlined = Outlined()
    XCTAssertEqual(outlined.OutlinedAddition(8), 8, "Outlined method broken")
    XCTAssertEqual(outlined.OutlinedAddition(2), 10, "Outlined method broken")
  }

  func testOutlinedInitalCtor() throws {
    var outlined = Outlined(10)
    XCTAssertEqual(outlined.OutlinedAddition(8), 18, "Outlined method broken")
    XCTAssertEqual(outlined.OutlinedAddition(2), 20, "Outlined method broken")
  }

}
