// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Network Isolation Key Worker Test Script
// summary: Service or shared worker script for the network isolation key test that imports and fetches URLs taken from query parameters.
// ---

// The service/shared worker for the network isolation key test.
const url_params = new URLSearchParams(location.search);
let import_script_url = url_params.get("import_script_url");
let fetch_url = url_params.get("fetch_url");
importScripts(import_script_url);
fetch(fetch_url);
