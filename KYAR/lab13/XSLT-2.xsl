<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:template match="/table">
  <html>
      <body>
        <h1>Информация об аттестации студентов</h1>
        <table border="1" style="width: 650px;border-collapse: collapse;">
          <tr>
            <th><xsl:value-of select="header/p"/></th>
           <th><xsl:value-of select="header/p1"/></th>
            <th><xsl:value-of select="header/p2"/></th>
             <th><xsl:value-of select="header/p3"/></th>
              <th style="width:100px"><xsl:value-of select="header/p4"/></th>
               <th><xsl:value-of select="header/p5"/></th>
          </tr>

          <xsl:for-each select="people">
        
            <tr style="text-align:center;">
            <td><xsl:value-of select="name"/></td>
            <xsl:choose>
             <xsl:when test="grade1 &lt; 4">
              <td style="background-color:red;color:white"> <xsl:value-of select="grade1"/></td></xsl:when>
             <xsl:when test="grade1 &gt; 8">
             <td style="background-color:green;color:white"> <xsl:value-of select="grade1"/></td></xsl:when>
             <xsl:otherwise><td> <xsl:value-of select="grade1"/></td></xsl:otherwise>
           </xsl:choose>

            <xsl:choose>
             <xsl:when test="grade2 &lt; 4">
              <td style="background-color:red;color:white"> <xsl:value-of select="grade2"/></td></xsl:when>
             <xsl:when test="grade2 &gt; 8">
             <td style="background-color:green;color:white"> <xsl:value-of select="grade2"/></td></xsl:when>
             <xsl:otherwise><td> <xsl:value-of select="grade2"/></td></xsl:otherwise>
           </xsl:choose>

            <xsl:choose>
             <xsl:when test="grade3 &lt; 4">
              <td style="background-color:red;color:white"> <xsl:value-of select="grade3"/></td></xsl:when>
             <xsl:when test="grade3 &gt; 8">
             <td style="background-color:green;color:white"> <xsl:value-of select="grade3"/></td></xsl:when>
             <xsl:otherwise><td> <xsl:value-of select="grade3"/></td></xsl:otherwise>
           </xsl:choose>

            <xsl:choose>
             <xsl:when test="grade4 &lt; 4">
              <td style="background-color:red;color:white"> <xsl:value-of select="grade4"/></td></xsl:when>
             <xsl:when test="grade4 &gt; 8">
             <td style="background-color:green;color:white"> <xsl:value-of select="grade4"/></td></xsl:when>
             <xsl:otherwise><td> <xsl:value-of select="grade4"/></td></xsl:otherwise>
           </xsl:choose>
            
           <xsl:choose>
             <xsl:when test="grade5 &lt; 4">
              <td style="background-color:red;color:white"> <xsl:value-of select="grade5"/></td></xsl:when>
             <xsl:when test="grade5 &gt; 8">
             <td style="background-color:green;color:white"> <xsl:value-of select="grade5"/></td></xsl:when>
             <xsl:otherwise><td> <xsl:value-of select="grade5"/></td></xsl:otherwise>
           </xsl:choose>
            </tr>
          </xsl:for-each>
        </table>
      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>