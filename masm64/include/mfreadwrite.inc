IFNDEF MFREADWRITE_INC
MFREADWRITE_INC equ <1>

PROTO64 external,MFCreateSinkWriterFromMediaSink, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateSinkWriterFromURL, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateSourceReaderFromByteStream, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateSourceReaderFromMediaSource, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateSourceReaderFromURL, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mfreadwrite.inc
echo -----------------------------------------
ENDIF

