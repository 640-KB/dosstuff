DEL MEGABIOS.EXE
DEL *.OBJ

ASM86 F.ASM
ASM86 VIDEO.ASM
ASM86 FLOPPY.ASM
ASM86 INITIAL.ASM
ASM86 BIOSDATA.ASM
ASM86 BOOT.ASM
ASM86 INTS.ASM
ASM86 USEFUL.ASM
ASM86 KEYBOARD.ASM
ASM86 STACK.ASM
ASM86 EQUIPMNT.ASM
ASM86 TIME.ASM
ASM86 GRAPHICS.ASM
ASM86 KEYINT.ASM
ASM86 RS232.ASM
ASM86 PRINTER.ASM
ASM86 PRINTSCN.ASM

LINK F VIDEO FLOPPY INITIAL BIOSDATA BOOT INTS USEFUL KEYBOARD STACK EQUIPMNT TIME GRAPHICS KEYINT RS232 PRINTER PRINTSCN,MB,MB;

GLA2ROM MB.EXE MEGABIOS.ROM