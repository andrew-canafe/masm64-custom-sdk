# MASM64-Custom-SDK
A custom SDK (2016) I crafted together for my personal assembly language projects. Includes the MASM64 assembler (Windows only).

How to use:
  Extract masm64sdk .zip file to C:\ or root directory.
  Assemble .asm file(s) with ml64.exe found in masm64\bin via command prompt.
  Link resulting .obj file(s) with link.exe found in masm64\bin via command prompt.
  May also use batch file examples found in masm64\examples for reference.

Example:
  \MASM64\BIN\ml64 /c myassemblyprogram.asm
  \MASM64\BIN\link /subsystem:console /entry:main myassemblyprogram.obj
