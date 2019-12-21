# MASM64-Custom-SDK
Custom MASM64 SDK (2016) that I put together for my personal assembly language projects. Includes the MASM64 assembler.

## How to use:
1. Extract masm64sdk.zip file to C:\ or root directory
2. Assemble .asm file(s) with ml64.exe found in masm64\bin via Command Prompt
3. Link resulting .obj file(s) with link.exe found in masm64\bin via Command Prompt
4. May also use batch file examples found in masm64\examples for reference

## Example:
```
\MASM64\BIN\ml64 /c myassemblyprogram.asm
\MASM64\BIN\link /subsystem:console /entry:main myassemblyprogram.obj
```
