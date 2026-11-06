// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Oversized script fixture for the executeScript size limit test
// summary: Fixture script padded past 700 bytes that sets the page title to 'big' so the test can verify executeScript rejects files over the size limit.
// ---

document.title = 'big';

/*
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
*/
