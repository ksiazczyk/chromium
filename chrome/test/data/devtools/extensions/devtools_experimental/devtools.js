// ---docerion
// type: test
// title: DevTools experimental API check script
// summary: Checks that chrome.experimental.devtools is defined and logs PASS or FAIL to the inspected window.
// ---

function output(msg) {
  chrome.devtools.inspectedWindow.eval("console.log(unescape('" +
      escape(msg) + "'));");
}

function test() {
  if (!chrome.experimental || !chrome.experimental.devtools) {
    output("FAIL: chrome.experimental.devtools should be defined");
    return;
  }
  output("PASS");
}

test();
