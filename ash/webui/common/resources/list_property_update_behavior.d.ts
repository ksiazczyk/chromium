// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ListPropertyUpdateBehavior declarations
// summary: TypeScript declarations for the ListPropertyUpdateBehavior interface used to update Polymer list properties incrementally.
// ---

export interface ListPropertyUpdateBehavior {
  updateList(
      propertyPath: string, identityGetter: ((arg0: any) => (any | string)),
      updatedList: any[], identityBasedUpdate?: boolean): boolean;
}

declare const ListPropertyUpdateBehavior: object;
