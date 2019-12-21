IFNDEF WEBSOCKET_INC
WEBSOCKET_INC equ <1>

PROTO64 external,WebSocketAbortHandle, :QWORD
PROTO64 external,WebSocketBeginClientHandshake, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WebSocketBeginServerHandshake, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WebSocketCompleteAction, :QWORD,:QWORD,:QWORD
PROTO64 external,WebSocketCreateClientHandle, :QWORD,:QWORD,:QWORD
PROTO64 external,WebSocketCreateServerHandle, :QWORD,:QWORD,:QWORD
PROTO64 external,WebSocketDeleteHandle, :QWORD
PROTO64 external,WebSocketEndClientHandshake, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WebSocketEndServerHandshake, :QWORD
PROTO64 external,WebSocketGetAction, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WebSocketGetGlobalProperty, :QWORD,:QWORD,:QWORD
PROTO64 external,WebSocketReceive, :QWORD,:QWORD,:QWORD
PROTO64 external,WebSocketSend, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file websocket.inc
echo -----------------------------------------
ENDIF

