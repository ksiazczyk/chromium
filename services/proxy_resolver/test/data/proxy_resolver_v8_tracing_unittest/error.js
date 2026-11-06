// ---docerion
// type: test
// title: PAC test script that throws an error for a host
// summary: Test fixture PAC script that raises an exception when the host is 'throw-an-error' to exercise resolver error handling.
// ---

function FindProxyForURL(url, host) {
  if (host == 'throw-an-error') {
    alert('Prepare to DIE!');
    var x = null;
    return x.split('-');  // Throws exception.
  }
  return "PROXY i-approve-this-message:42";
}
