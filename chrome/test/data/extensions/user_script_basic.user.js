// ==UserScript==
// @name My user script
// @version 2.2.2
// @namespace http://www.google.com
// @description Does totally awesome stuff.
// @include http://www.google.com/*
// @include http://www.yahoo.com/*
// @exclude *foo*
// @match http://www.google.com/*
// @exclude_match http://www.google.com/foo*
// ==/UserScript==

// ---docerion
// type: test
// title: Basic user script fixture
// summary: Sample user script with metadata headers for include, match, and exclude patterns that shows an alert when run.
// ---

alert('Hello! This is my script.');
