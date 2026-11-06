// ---docerion
// type: test
// title: json-list.js JSON list sniffing test payload
// summary: JSON array payload explaining that JSON lists need a JSON MIME type, nosniff, or a parser-breaking prefix for protection.
// ---

["we can't protect JSON lists through sniffing alone",
 "... unless we are willing to buffer the entire response.",
 "Protection can be obtained by supplying a JSON mime type and setting the ",
 "nosniff header, and/or by including a parser-breaking prefix."]
