-- ---docerion
-- type: test
-- title: Limited in-memory URL index test database fixture
-- summary: Minimal SQL fixture inserting a single urls row for limited in-memory URL index test cases.
-- ---

-- See url_history_provider_test.db.txt for a schema definition.
INSERT INTO "urls" VALUES(1, 'http://def.ghi?jkl=mno&pqr0123456789stu#vwx!yz=words', 'This example has 19 WORDS and 35 unique characters', 3, 1, 2, 0);
