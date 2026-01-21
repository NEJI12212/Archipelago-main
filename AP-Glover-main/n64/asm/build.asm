.n64
.relativeinclude on

;version guard, prevent people from building with older armips versions
.if (version() < 110)
.notice version()
.error   "Detected armips build is too old. Please install https://github.com/Kingcom/armips version 0.11 or later."
.endif

.create patchedfile, 0
.incbin romfile

;replace game init with code that loads payload (in B00X Address)
.orga 0x03E990
.area 0xAC, 0
.align 0x10
.importobj bootbundle
.endarea

.orga 0x03EC10
J 0x80400284

;;Ability to inject while object is Initializing for PigheadColours
;.orga 0x0D36A4
;NOP
;NOP
;.incbin romfile, 0x0D36A4, 0x4C
;.orga 0x0D36E8
;B 0x0D3380
;;EO while Object



.headersize (0x80400000 - 0x800000)

.org    0x80400000
.area   0x00200000 ;payload max memory

AP_MEMORY_PTR:
.word 0

;modify replaced code and add back to run later
init_game:
  .incbin romfile,0x03E990,0x280
  JAL inject_hooks
  NOP
  NOP
  NOP
  .incbin romfile,(0x03E990+0x290),0x30C


PAYLOAD_START:

.align 0x10
.importobj srcbundle
.include "glover_awful_display.asm"


PAYLOAD_END:
.endarea ; payload max memory


.close
