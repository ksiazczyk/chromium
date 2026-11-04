---
name: general/prefer-gmock-matchers-for-string-search-assertions
rubric: readability
severity: nit
type: decision
title: Prefer GMock matchers for string search assertions
summary: Coding rule advising GMock string matchers such as HasSubstr over manual find/npos checks in test assertions, with rationale and good and bad C++ examples.
---

**Rule.** In test assertions, prefer GMock string matchers (such as
EXPECT_THAT(str, ::testing::HasSubstr(...)), StartsWith(...), or EndsWith(...))
over manual search checks like EXPECT_NE(str.find(...), std::string::npos).

**Why.** Comparing .find(...) against npos only reports index equality on
failure, concealing the actual string produced. Using EXPECT_THAT with GMock
matchers prints the actual string and the expected substring pattern in test
failure logs.

## Examples

Bad:

```cpp
EXPECT_NE(temp_dir.value().find(FILE_PATH_LITERAL("test_dir_prefix")),
          FilePath::StringType::npos);
```

Good:

```cpp
EXPECT_THAT(temp_dir.value(),
            ::testing::HasSubstr(FILE_PATH_LITERAL("test_dir_prefix")));
```
