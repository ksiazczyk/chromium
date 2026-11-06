// ---docerion
// type: test
// title: json.js JSON object test payload
// summary: JSON object payload explaining why non-empty JSON objects are invalid JavaScript and can be blocked by sniffing.
// ---

{"non-empty JSON objects" : ["Are not valid Javascript programs. Why?",
     "Because this colon ^^^ should be a syntax error.",
     "Thus, we can block them, provided the colon appears",
     "in the first 1024 bytes of the stream."]}
