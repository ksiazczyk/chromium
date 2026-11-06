---
type: readme
title: SessionProtoDB overview
summary: Explains that SessionProtoDB is a per-session, per-proto LevelDB database abstraction built on components/leveldb_proto.
---

SessionProtoDB is a per session (BrowserContext/BrowserState) per-proto
Level DB database. It is an abstraction built on top of components/leveldb
enabling ease of storage across BrowserContext/BrowserState
(components/leveldb is a proto database).
