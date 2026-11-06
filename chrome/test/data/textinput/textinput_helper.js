// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Text input test helper
// summary: JavaScript helper for the text input tests that retrieves the coordinate rectangle of a DOM element by its id.
// ---

var textinput_helper = {
  retrieveElementCoordinate: function(id) {
    var ele = document.getElementById(id);
    var coordinate = Math.floor(ele.offsetLeft) + ',' +
        Math.floor(ele.offsetTop) + ',' +
        Math.ceil(ele.offsetWidth) + ',' +
        Math.ceil(ele.offsetHeight);
    return coordinate;
  }
};
