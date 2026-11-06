# Copyright 2020 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: JSON constants for dependency graph de/serialization
# summary: Defines constants for node, edge, build metadata and graph keys used when serializing and deserializing dependency graphs.
# ---

"""Various constants used in de/serialization."""

# Node-specific constants
NODES = 'nodes'
NAME = 'name'

# Edge-specific constants.
EDGES = 'edges'
BEGIN = 'begin'
END = 'end'

# Build metadata attributes.
COMMIT_HASH = 'commit_hash'
COMMIT_CR_POSITION = 'commit_cr_position'
COMMIT_TIME = 'commit_time'

# Miscellaneous attributes.
TARGET_GRAPH = 'target_graph'
PACKAGE_GRAPH = 'package_graph'
CLASS_GRAPH = 'class_graph'
BUILD_METADATA = 'build_metadata'
META = 'meta'
