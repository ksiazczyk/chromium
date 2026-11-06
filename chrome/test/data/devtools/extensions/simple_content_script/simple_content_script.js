// ---docerion
// type: test
// title: Simple content script test fixture
// summary: Content script that attaches a click listener containing a debugger statement, serving as test data for DevTools extension tests.
// ---

function buttonClickListener(e) {
  var localVar = e + 'a';
  debugger;
}


var button = document.getElementById('btn');
if (button) {
  button.addEventListener('click', buttonClickListener, false);
}
