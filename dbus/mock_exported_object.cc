// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockExportedObject implementation
// summary: Implements the MockExportedObject constructor and destructor for the gmock-based ExportedObject test double.
// ---

#include "dbus/mock_exported_object.h"

namespace dbus {

MockExportedObject::MockExportedObject(Bus* bus,
                                       const ObjectPath& object_path)
    : ExportedObject(bus, object_path) {
}

MockExportedObject::~MockExportedObject() = default;

}  // namespace dbus
