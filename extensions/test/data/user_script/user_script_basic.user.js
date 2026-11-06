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
// title: Basic user script with full metadata block
// summary: User script fixture carrying a complete metadata header with include, exclude, match and exclude_match patterns, used to exercise metadata parsing.
// ---

alert("Hello! This is my script.");
