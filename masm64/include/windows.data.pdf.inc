IFNDEF WINDOWS.DATA.PDF_INC
WINDOWS.DATA.PDF_INC equ <1>

PROTO64 external,PdfCreateRenderer, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file windows.data.pdf.inc
echo -----------------------------------------
ENDIF

