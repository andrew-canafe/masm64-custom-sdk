IFNDEF RPCEXTS_INC
RPCEXTS_INC equ <1>

PROTO64 external,DebugExtensionInitialize, :QWORD,:QWORD
PROTO64 external,DebugExtensionNotify, :QWORD,:QWORD,:QWORD
PROTO64 external,DebugExtensionUninitialize, 
PROTO64 external,KnownStructOutputEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,addrvect, :QWORD,:QWORD
PROTO64 external,ama, :QWORD,:QWORD
PROTO64 external,asyncmsg, :QWORD,:QWORD
PROTO64 external,asyncrpc, :QWORD,:QWORD
PROTO64 external,authinfo, :QWORD,:QWORD
PROTO64 external,copacket, :QWORD,:QWORD
PROTO64 external,dict2, :QWORD,:QWORD
PROTO64 external,dict, :QWORD,:QWORD
PROTO64 external,eeinfo, :QWORD,:QWORD
PROTO64 external,eerecord, :QWORD,:QWORD
PROTO64 external,error, :QWORD,:QWORD
PROTO64 external,fwscan, :QWORD,:QWORD
PROTO64 external,getcallinfo, :QWORD,:QWORD
PROTO64 external,getclientcallinfo, :QWORD,:QWORD
PROTO64 external,getdbgcell, :QWORD,:QWORD
PROTO64 external,getendpointinfo, :QWORD,:QWORD
PROTO64 external,getthreadinfo, :QWORD,:QWORD
PROTO64 external,getvalidateerror, :QWORD,:QWORD
PROTO64 external,help, :QWORD,:QWORD
PROTO64 external,if, :QWORD,:QWORD
PROTO64 external,listcalls, :QWORD,:QWORD
PROTO64 external,lpcaddr, :QWORD,:QWORD
PROTO64 external,lpcbh, :QWORD,:QWORD
PROTO64 external,lpcca, :QWORD,:QWORD
PROTO64 external,lpcccall, :QWORD,:QWORD
PROTO64 external,lpcsa, :QWORD,:QWORD
PROTO64 external,lpcscall, :QWORD,:QWORD
PROTO64 external,mode, :QWORD,:QWORD
PROTO64 external,obj, :QWORD,:QWORD
PROTO64 external,overlap, :QWORD,:QWORD
PROTO64 external,pasync, :QWORD,:QWORD
PROTO64 external,pipedesc, :QWORD,:QWORD
PROTO64 external,pipemsg, :QWORD,:QWORD
PROTO64 external,pipestate, :QWORD,:QWORD
PROTO64 external,protocols, :QWORD,:QWORD
PROTO64 external,queue, :QWORD,:QWORD
PROTO64 external,rpcheap, :QWORD,:QWORD
PROTO64 external,rpcmsg, :QWORD,:QWORD
PROTO64 external,rpcreadstack, :QWORD,:QWORD
PROTO64 external,rpcsvr, :QWORD,:QWORD
PROTO64 external,rpctime, :QWORD,:QWORD
PROTO64 external,rpcverbosestack, :QWORD,:QWORD
PROTO64 external,rpcverifier, :QWORD,:QWORD
PROTO64 external,scan, :QWORD,:QWORD
PROTO64 external,secinfo, :QWORD,:QWORD
PROTO64 external,sizes, :QWORD,:QWORD
PROTO64 external,stackmatch, :QWORD,:QWORD
PROTO64 external,stubmsg, :QWORD,:QWORD
PROTO64 external,thread, :QWORD,:QWORD
PROTO64 external,traceasynccall, :QWORD,:QWORD
PROTO64 external,tracesynccall, :QWORD,:QWORD
PROTO64 external,trans, :QWORD,:QWORD
PROTO64 external,transinfo, :QWORD,:QWORD
PROTO64 external,version, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file rpcexts.inc
echo -----------------------------------------
ENDIF

