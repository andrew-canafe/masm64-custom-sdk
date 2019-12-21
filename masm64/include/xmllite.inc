IFNDEF XMLLITE_INC
XMLLITE_INC equ <1>

PROTO64 external,CreateXmlReader, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateXmlReaderInputWithEncodingCodePage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateXmlReaderInputWithEncodingName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateXmlWriter, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateXmlWriterOutputWithEncodingCodePage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateXmlWriterOutputWithEncodingName, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file xmllite.inc
echo -----------------------------------------
ENDIF

