// ---docerion
// type: source
// title: Test runner hooks for framed test pages
// summary: Defines startTest, test, endTest and prep hooks that fall back to the top-level runner when tests run inside frames.
// ---

var startTest = top.startTest || function(){};
var test = top.test || function(name, fn){ fn(); };
var endTest = top.endTest || function(){};
var prep = top.prep || function(fn){ fn(); };
