# Copyright 2012 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: GRIT skeleton variant node element
# summary: Implements the GRIT <skeleton> element, which defines skeleton variants of structure nodes selected by expressions such as language.
# ---

'''The <skeleton> element.'''

from grit.node import base


class SkeletonNode(base.Node):
  '''A <skeleton> element.'''

  # TODO(joi) Support inline skeleton variants as CDATA instead of requiring
  # a 'file' attribute.

  def MandatoryAttributes(self):
    return ['expr', 'variant_of_revision', 'file']

  def DefaultAttributes(self):
    '''If not specified, 'encoding' will actually default to the parent node's
    encoding.
    '''
    return {'encoding': ''}

  def _ContentType(self):
    if 'file' in self.attrs:
      return self._CONTENT_TYPE_NONE
    else:
      return self._CONTENT_TYPE_CDATA

  def GetEncodingToUse(self):
    if self.attrs['encoding'] == '':
      return self.parent.attrs['encoding']
    else:
      return self.attrs['encoding']

  def GetInputPath(self):
    return self.attrs['file']
