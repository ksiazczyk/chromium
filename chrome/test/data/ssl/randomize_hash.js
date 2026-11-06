// ---docerion
// type: test
// title: Randomize hash script
// summary: JavaScript snippet that writes HTTP script content into the page and sets the location hash to a random value.
// ---

document.body.innerHTML = "I'm content from an HTTP script." 
location.hash = Math.random();
