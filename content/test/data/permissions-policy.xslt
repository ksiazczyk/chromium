<?xml version="1.0"?>
<!--docerion
type: test
title: XSLT stylesheet for the permissions-policy XML page
summary: XSLT stylesheet that transforms the permissions-policy XML test page into an empty HTML document.
-->

<xsl:stylesheet version="1.0"
              xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="page">
  <html></html>
</xsl:template>

</xsl:stylesheet>