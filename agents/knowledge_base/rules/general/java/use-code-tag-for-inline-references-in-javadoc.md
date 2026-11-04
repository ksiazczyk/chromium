---
name: general/use-code-tag-for-inline-references-in-javadoc
rubric: readability
severity: nit
type: guide
title: Use code tags for inline references in Javadoc
summary: Readability rule requiring inline code tokens, parameters, and type names in Javadoc to use {@code ...} or <code>...</code> rather than Markdown backticks, C++ pipe delimiters, or invalid {@param} tags.
---

**Rule.** In Java doc comments, format inline code tokens, parameters, methods,
and type names using {@code ...} (or <code>...</code>). Do not use Markdown
backticks (`...`), C++ pipe delimiters (|...|), or invalid inline {@param ...}
tags for inline code references.

**Why.** Standard Javadoc parsers interpret HTML tags and Javadoc inline tags
rather than Markdown syntax or C++ comment conventions. Using {@code ...}
ensures code tokens, variable names, and parameter references format cleanly and
render correctly across IDE tooltips and generated HTML documentation without
leaking unparsed backticks or pipes.

## Examples

Bad:

```cpp
/**
 * Updates the selection bounds for `view` and |controller|.
 *
 * @param startVirtualDescendantId The ID of the virtual descendant within `view`'s virtual
 *     subtree that contains the start selection position.
 * @param options Configuration options for {@param controller}.
 */
public void updateSelection(int startVirtualDescendantId, Controller controller) {}
```

Good:

```cpp
/**
 * Updates the selection bounds for {@code view} and {@code controller}.
 *
 * @param startVirtualDescendantId The ID of the virtual descendant within {@code view}'s
 *     virtual subtree that contains the start selection position.
 * @param options Configuration options for {@code controller}.
 */
public void updateSelection(int startVirtualDescendantId, Controller controller) {}
```
