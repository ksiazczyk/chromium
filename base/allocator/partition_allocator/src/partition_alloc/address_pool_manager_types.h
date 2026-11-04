// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Pool handle type declaration
// summary: Forward-declares the pool_handle enum used to identify address space pools in the address pool manager.
// ---

#ifndef PARTITION_ALLOC_ADDRESS_POOL_MANAGER_TYPES_H_
#define PARTITION_ALLOC_ADDRESS_POOL_MANAGER_TYPES_H_

namespace partition_alloc::internal {

enum pool_handle : unsigned;

}  // namespace partition_alloc::internal

#endif  // PARTITION_ALLOC_ADDRESS_POOL_MANAGER_TYPES_H_
