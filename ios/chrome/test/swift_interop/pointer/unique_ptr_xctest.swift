// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: XCTest for unique_ptr object passing from C++ to Swift
// summary: XCTest case verifying that a std::unique_ptr returned by ValueReturner is readable in Swift with the expected value.
// ---

import CxxImports
import UIKit
import XCTest

class UniquePointerTest: XCTestCase {

  func testReturnedObjectPointer() throws {
    var returner = ValueReturner()
    let object = returner.Object()
    // Force a read-only access by assigning to a temporary value.
    let value = object.pointee
    XCTAssertEqual(value.IsValid(), true, "")
    XCTAssertEqual(value.GetValue(), 42, "")
  }

}
