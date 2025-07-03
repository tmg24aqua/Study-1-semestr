<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:template match="/shop">
    <html>
      <body>
       <h1  style="color:red;"><xsl:value-of select="title1"/></h1>
        <table border="1" style="border-collapse: collapse;">
          <tr>
            <th><xsl:value-of select="heading/cap1"/></th>
            <th><xsl:value-of select="heading/cap2"/></th>
            <th><xsl:value-of select="heading/cap3"/></th>
          </tr>
          <xsl:for-each select="product">
            <xsl:sort select="price" data-type="number" order="ascending"/>
            <tr>
              <td style="text-align:center;"><xsl:value-of select="name"/></td>
              <td style="text-align:center;width:80px "><xsl:value-of select="price"/></td>
              <td  style="text-align:justify;text-indent: 15px;padding: 10px; "><xsl:value-of select="characteristics"/></td>
            </tr>
          </xsl:for-each>
        </table>
      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>
