// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// META: --screen-info={1600x1200}
// META: --window-size=800,600

// ---docerion
// type: test
// title: Element requestFullscreen test
// summary: Protocol test that enters and exits element fullscreen via user gesture and observes the resulting page resize events through CDP.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const html = `
      <html>
      <body>
        <div id="fullscreen-div">The element.</div>
      </body>
      <script>
        function enterFullscreen() {
          const element = document.getElementById("fullscreen-div");
          return new Promise(resolve => {
            element.addEventListener("fullscreenchange", () => {
              if (document.fullscreenElement) {
                resolve(document.fullscreenElement.id);
              }
            });
            element.requestFullscreen();
          }
        )}

        function exitFullscreen() {
          document.exitFullscreen();
        }
      </script>
      </html>
  `;
  const {session, dp} =
      await testRunner.startHTML(html, 'Tests element requestFullscreen.');

  await dp.Page.enable();

  const [entered_fullscreen] = await Promise.all([
    session.evaluateAsyncWithUserGesture('window.enterFullscreen();'),
    dp.Page.onceFrameResized(),
  ]);

  testRunner.log(
      'Seen page zoom and fullscreen element: ' + entered_fullscreen);

  session.evaluateAsyncWithUserGesture('window.exitFullscreen();');
  await dp.Page.onceFrameResized();
  testRunner.log('Seen page un-zoom');

  testRunner.completeTest();
});
