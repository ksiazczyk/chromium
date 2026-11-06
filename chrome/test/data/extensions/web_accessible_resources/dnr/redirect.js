// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Redirect script for DNR web accessible resources test extension
// summary: Script that reads a url query parameter and replaces the current location with the search part of that URL.
// ---

const fullUrl = new URLSearchParams(window.location.search).get('url');
location.replace(new URL(fullUrl).search.slice(3));
