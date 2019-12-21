IFNDEF FLTLIB_INC
FLTLIB_INC equ <1>

PROTO64 external,FilterAttach, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterAttachAtAltitude, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterClose, :QWORD
PROTO64 external,FilterConnectCommunicationPort, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterCreate, :QWORD,:QWORD
PROTO64 external,FilterDetach, :QWORD,:QWORD,:QWORD
PROTO64 external,FilterFindClose, :QWORD
PROTO64 external,FilterFindFirst, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterFindNext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterGetDosName, :QWORD,:QWORD,:QWORD
PROTO64 external,FilterGetInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterGetMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterInstanceClose, :QWORD
PROTO64 external,FilterInstanceCreate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterInstanceFindClose, :QWORD
PROTO64 external,FilterInstanceFindFirst, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterInstanceFindNext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterInstanceGetInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterLoad, :QWORD
PROTO64 external,FilterReplyMessage, :QWORD,:QWORD,:QWORD
PROTO64 external,FilterSendMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterUnload, :QWORD
PROTO64 external,FilterVolumeClose, :QWORD
PROTO64 external,FilterVolumeFindClose, :QWORD
PROTO64 external,FilterVolumeFindFirst, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterVolumeFindNext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterVolumeInstanceFindClose, :QWORD
PROTO64 external,FilterVolumeInstanceFindFirst, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterVolumeInstanceFindNext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file fltlib.inc
echo -----------------------------------------
ENDIF

