// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PDF bookmark type definition
// summary: Defines the Bookmark interface describing table-of-contents entries that target a page location with optional position and zoom, or a URI.
// ---

/**
 * The |title| is the text label displayed for the bookmark.
 *
 * The bookmark may point at a location in the PDF or a URI.
 * If it points at a location, |page| indicates which 0-based page it leads to.
 * Optionally, |x| is the x position in that page, |y| is the y position in that
 * page, in pixel coordinates and |zoom| is the new zoom value. If it points at
 * an URI, |uri| is the target for that bookmark.
 *
 * |children| is an array of the |Bookmark|s that are below this in a table of
 * contents tree
 */
export interface Bookmark {
  title: string;
  children: Bookmark[];
  page?: number;
  x?: number;
  y?: number;
  zoom?: number;
  uri?: string;
}
