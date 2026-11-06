---
type: test
title: Test addition coverage scenarios
summary: Markdown describing test scenarios and whether they should generate processed tests that change the expected coverage file.
---

# This test should generate 1 processed tests:
| MWLC | state_change_a(Chicken) | check_a(Chicken) | state_change_a(Dog) | check_a(Dog) | state_change_a(Chicken) |

# This test should not result in any change in the expected file
| MWLC | state_change_a(Chicken) | state_change_a(Dog) | check_a(Dog) |
