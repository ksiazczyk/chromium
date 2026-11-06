// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Worker with import and fetch for network isolation key test
// summary: Service or shared worker script that imports a script URL and fetches another URL taken from query parameters, used by network isolation key tests.
// ---

// The service/shared worker for the network isolation key test.
const url_params = new URLSearchParams(location.search);
let import_script_url = url_params.get("import_script_url");
let fetch_url = url_params.get("fetch_url");
importScripts(import_script_url);
fetch(fetch_url);
