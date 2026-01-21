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
.orga 0x03C190
.area 0x64, 0
.align 0x10
.importobj bootbundle
.endarea

.headersize (0x80400000 - 0x1000000)

.org    0x80400000
.area   0x00200000 ;payload max memory

AP_MEMORY_PTR:
.word 0

;modify replaced code and add back to run later
init_game:
  .incbin romfile,0x03C190,0x4C
  JAL inject_hooks
  NOP
  .incbin romfile,(0x03C190+0x4C),0x18

PAYLOAD_START:

.align 0x10
.importobj srcbundle



PAYLOAD_END:
.endarea ; payload max memory


.close
