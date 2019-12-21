# MASM64-Custom-SDK
A custom SDK (2016) I crafted for my personal assembly language projects. Includes the MASM64 assembler (Windows only).

How to use:
1. Extract masm64sdk .zip file to C:\ or root directory.
2. Assemble .asm file(s) with ml64.exe found in masm64\bin via command prompt.
3. Link resulting .obj file(s) with link.exe found in masm64\bin via command prompt.
4. May also use batch file examples found in masm64\examples for reference.

Example:
```
\MASM64\BIN\ml64 /c myassemblyprogram.asm
\MASM64\BIN\link /subsystem:console /entry:main myassemblyprogram.obj
```
