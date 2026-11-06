// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker PressureObserver helper
// summary: Shared worker script that starts observing CPU pressure on command and posts pressure records back over the connected port.
// ---

'use strict';

onconnect = function(e) {
  const port = e.ports[0];

  function pressureChange(data) {
    port.postMessage({type: 'data', update: data[0].toJSON()});
  }

  const observer = new PressureObserver(pressureChange);

  port.onmessage = async (e) => {
    if (e.data.command == 'start') {
      try {
        await observer.observe('cpu');
        port.postMessage({result: 'success'});
      } catch (error) {
        port.postMessage({result: 'fail'});
      }
    }
  }

  port.start();
}
