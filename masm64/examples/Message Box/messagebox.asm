includelib \masm64\lib\kernel32.lib
includelib \masm64\lib\user32.lib
extern MessageBoxA : proc
extern ExitProcess : proc

.data
lpCapt		db		'My Message Box', 0
lpText		db		'Hello, world!', 0

.code
start		proc
		sub		rsp, 28h

		xor		r9d, r9d
		lea		r8, lpCapt
		lea		rdx, lpText
		xor		ecx, ecx
		call		MessageBoxA

		xor		ecx, ecx
		call		ExitProcess 
start		endp
		end