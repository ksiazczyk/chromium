<?xml version="1.0" encoding="ISO-8859-1"?>
<!--Copyright 2011 The Chromium Authors
    Use of this source code is governed by a BSD-style license that can be
    found in the LICENSE file. -->

<!--docerion
type: test
title: XSLT bad import URI test stylesheet
summary: XSL stylesheet that imports a nonexistent file and applies imported templates, used to test handling of a bad import URI.
-->

<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:import href="nosuchfileatall"/>
<xsl:template match="/">
 <xsl:apply-imports/>
</xsl:template>
</xsl:stylesheet>
