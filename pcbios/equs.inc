%ifndef __EQUS_INC__
%define __EQUS_INC__

;----------------------------------------
;		EQUATES 		:
;----------------------------------------
PORT_A		EQU	60H		; 8255 PORT A ADDR
PORT_B		EQU	61H		; 8255 PORT B ADDR
PORT_C		EQU	62H		; 8255 PORT C ADDR
CMD_PORT	EQU	63H
INTA00		EQU	20H		; 8259 PORT
INTA01		EQU	21H		; 8259 PORT
EOI		EQU	20H
TIMER		EQU	40H
TIM_CTL 	EQU	43H		; 8253 TIMER CONTROL PORT ADDR
TIMER0		EQU	40H		; 8253 TIMER/CNTER 0 PORT ADDR
TMINT		EQU	01		; TIMER 0 INTR RECVD MASK
DMA08		EQU	08		; DMA STATUS REG PORT ADDR
DMA		EQU	00		; DMA CHANNEL 0 ADDRESS REG PORT ADDR
MAX_PERIOD	EQU	540H
MIN_PERIOD	EQU	410H
KBD_IN		EQU	60H		; KEYBOARD DATA IN ADDR PORT
KBDINT		EQU	02		; KEYBOARD INTR MASK
KB_DATA 	EQU	60H		; KEYBOARD SCAN CODE PORT
KB_CTL		EQU	61H		; CONTROL BITS FOR KEYBOARD SENSE DATA

;----------------------------------------
;	8088 INTERRUPT LOCATIONS	:
;----------------------------------------
ABS0		EQU	0
STG_LOC0	EQU	0
NMI_PTR 	EQU	2*4
INT5_PTR	EQU	5*4
INT_ADDR	EQU	8*4
INT_PTR 	EQU	8*4
VIDEO_INT	EQU	10H*4
PARM_PTR	EQU	1DH*4		; POINTER TO VIDEO PARMS
BASIC_PTR	EQU	18H*4		; ENTRY POINT FOR CASSETTE BASIC
DISK_POINTER	EQU	01EH*4		; INTERRUPT 1EH
EXT_PTR		EQU	01FH*4		; LOCATION OF POINTER
					; TO EXTENSION ROUTINE
IO_ROM_INIT	EQU	040H*4
IO_ROM_SEG	EQU	(040H*4)+2	; OPTIONAL ROM SEGMENT
DATA_AREA	EQU	400H		; ABSOLUTE LOCATION OF DATA SEGMENT
DATA_WORD	EQU	400H
BOOT_LOCN	EQU	7C00H

;----- SHIFT FLAG EQUATES WITHIN KB_FLAG

INS_STATE	EQU	80H		; INSERT STATE IS ACTIVE
CAPS_STATE	EQU	40H		; CAPS LOCK STATE HAS BEEN TOGGLED
NUM_STATE	EQU	20H		; NUM LOCK STATE HAS BEEN TOGGLED
SCROLL_STATE	EQU	10H		; SCROLL LOCK STATE HAS BEEN TOGGLED
ALT_SHIFT	EQU	08H		; ALTERNATE SHIFT KEY DEPRESSED
CTL_SHIFT	EQU	04H		; CONTROL SHIFT KEY DEPRESSED
LEFT_SHIFT	EQU	02H		; LEFT SHIFT KEY DEPRESSED
RIGHT_SHIFT	EQU	01H		; RIGHT SHIFT KEY DEPRESSED

INS_SHIFT	EQU	80H		; INSERT KEY IS DEPRESSED
CAPS_SHIFT	EQU	40H		; CAPS LOCK KEY IS DEPRESSED
NUM_SHIFT	EQU	20H		; NUM LOCK KEY IS DEPRESSED
SCROLL_SHIFT	EQU	10H		; SCROLL LOCK KEY IS DEPRESSED
HOLD_STATE	EQU	08H		; SUSPEND KEY HAS BEEN TOGGLED

NUM_KEY 	EQU	69		; SCAN CODE FOR NUMBER LOCK
SCROLL_KEY	EQU	70		; SCROLL LOCK KEY
ALT_KEY 	EQU	56		; ALTERNATE SHIFT KEY SCAN CODE
CTL_KEY 	EQU	29		; SCAN CODE FOR CONTROL KEY
CAPS_KEY	EQU	58		; SCAN CODE FOR SHIFT LOCK
LEFT_KEY	EQU	42		; SCAN CODE FOR LEFT SHIFT
RIGHT_KEY	EQU	54		; SCAN CODE FOR RIGHT SHIFT
INS_KEY 	EQU	82		; SCAN CODE FOR INSERT KEY
DEL_KEY 	EQU	83		; SCAN CODE FOR DELETE KEY

INT_FLAG	EQU	080H		; INTERRUPT OCCURRENCE FLAG

MOTOR_WAIT	EQU	37		; TWO SECONDS OF COUNTS FOR MOTOR TURN OFF

TIME_OUT	EQU	80H		; ATTACHMENT FAILED TO RESPOND
BAD_SEEK	EQU	40H		; SEEK OPERATION FAILED
BAD_NEC 	EQU	20H		; NEC CONTROLLER HAS FAILED
BAD_CRC 	EQU	10H		; BAD CRC ON DISKETTE READ
DMA_BOUNDARY	EQU	09H		; ATTEMPT TO DMA ACROSS 64K BOUNDARY
BAD_DMA 	EQU	08H		; DMA OVERRUN ON OPERATION
RECORD_NOT_FND	EQU	04H		; REQUESTED SECTOR NOT FOUND
WRITE_PROTECT	EQU	03H		; WRITE ATTEMPTED ON WRITE PROT DISK
BAD_ADDR_MARK	EQU	02H		; ADDRESS MARK NOT FOUND
BAD_CMD 	EQU	01H		; BAD COMMAND PASSED TO DISKETTE I/O

%endif ; !__EQUS_INC__