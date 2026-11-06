<?xml version="1.0" encoding="UTF-8"?>
<!--docerion
type: test
title: XSLT transformation stylesheet for the webNavigation test
summary: XSLT stylesheet that converts text nodes into HTML content, causing the transformed document that produces the second round of navigation events in the test.
-->

<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:output method="html" xmlns:xalan="http://xml.apache.org/xslt"/>
	<xsl:template match="text()">
		Let's put some content here
	</xsl:template>
</xsl:stylesheet>