includelib \masm64\lib\kernel32.lib
extern GetStdHandle :proc
extern WriteFile :proc
extern lstrlen :proc
extern ExitProcess :proc

.data
hFile		dd		0
msglen		dd		0
BytesWritten	dq		0
msg		db		"Hello, world!", 13, 10, 0

.code
main		proc
		sub		rsp, 28h

		lea		rcx, msg
		call		lstrlen

		mov		msglen, eax

		mov		ecx, -11        	;std output
		call		GetStdHandle

		mov		hFile, eax

		lea		r9, BytesWritten
		mov		r8d, msglen
		lea		rdx, msg
		mov		ecx, hFile
		call		WriteFile

		xor		ecx, ecx		;zero exit code
		call		ExitProcess

main		endp
		end