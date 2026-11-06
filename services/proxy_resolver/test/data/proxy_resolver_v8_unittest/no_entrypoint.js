// ---docerion
// type: test
// title: PAC test script missing FindProxyForURL entry point
// summary: Invalid PAC script that defines no FindProxyForURL() function, used to test how the resolver handles scripts without an entry point.
// ---

var x = "This is an invalid PAC script because it lacks a " +
        "FindProxyForURL() function";
