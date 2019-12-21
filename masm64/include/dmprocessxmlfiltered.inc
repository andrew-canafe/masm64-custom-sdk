IFNDEF DMPROCESSXMLFILTERED_INC
DMPROCESSXMLFILTERED_INC equ <1>

PROTO64 external,DMProcessConfigXML, :QWORD,:QWORD
PROTO64 external,DMProcessConfigXMLFiltered, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MdmProcessConfigXmlWithAttributes, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dmprocessxmlfiltered.inc
echo -----------------------------------------
ENDIF

