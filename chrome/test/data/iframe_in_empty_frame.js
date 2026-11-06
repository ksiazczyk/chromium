// ---docerion
// type: test
// title: Empty frame iframe navigation test script
// summary: JavaScript test page that writes into an empty frame and then navigates it to an external site.
// ---

document.write('');
document.location.href="http://www.google.com/"
document.write('');
