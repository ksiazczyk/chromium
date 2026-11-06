// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MetadataRequest class for metadata queries
// summary: Defines the MetadataRequest class pairing a file entry with the list of metadata property names to fetch.
// ---

import type {FilesAppEntry} from '../../../common/js/files_app_entry_types.js';

import type {MetadataKey} from './metadata_item.js';

export class MetadataRequest {
  /**
   * @param names Property name list to be requested.
   */
  constructor(public entry: Entry|FilesAppEntry, public names: MetadataKey[]) {}
}
