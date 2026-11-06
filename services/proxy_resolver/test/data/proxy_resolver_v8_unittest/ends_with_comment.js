// ---docerion
// type: test
// title: PAC test script ending with a comment
// summary: PAC script ending in a comment without a trailing newline to test appending of internal functions to the script.
// ---

function FindProxyForURL(url, host) {
  return "PROXY success:80";
}

// We end the script with a comment (and no trailing newline).
// This used to cause problems, because internally ProxyResolverV8
// would append some functions to the script; the first line of
// those extra functions was being considered part of the comment.