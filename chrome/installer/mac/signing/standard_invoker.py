# Copyright 2023 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Standard invoker combining signing and notarization
# summary: Implements the invoker interface by composing the signing and notarization invokers and their arguments.
# ---

from signing import invoker, notarize, signing


class Invoker(invoker.Interface):
    def __init__(self, *args):
        self._signer = signing.Invoker(*args)
        self._notarizer = notarize.Invoker(*args)

    @property
    def signer(self):
        return self._signer

    @property
    def notarizer(self):
        return self._notarizer

    @staticmethod
    def register_arguments(parser):
        signing.Invoker.register_arguments(parser)
        notarize.Invoker.register_arguments(parser)
