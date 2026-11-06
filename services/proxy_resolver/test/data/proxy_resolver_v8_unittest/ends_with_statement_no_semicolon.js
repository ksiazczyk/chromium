// ---docerion
// type: test
// title: PAC test script ending without semicolon or newline
// summary: PAC script whose final statement lacks a semicolon and terminal newline, exercising parser tolerance of such endings.
// ---

// Ends with a statement, and no terminal newline.
function FindProxyForURL(url, host) { return "PROXY success:" + x; }
x = 3