# Copyright 2022 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: Common type aliases for the optimizers
# summary: Defines shared argparse-related type aliases, such as command parser and parsed argument types, used across the optimizer modules.
# ---

"""Helper module to store file-independent, common type hinting."""

import argparse
import typing

CmdArgParser = argparse.ArgumentParser
ParsedCmdArgs = argparse.Namespace
ArgumentGroup = 'argparse._ArgumentGroup'
ArgumentGroupTuple = typing.Tuple[ArgumentGroup, ArgumentGroup, ArgumentGroup]
