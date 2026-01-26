    .section .text
    .globl _start
_start:
    li  sp, 0x1ff0        # topo da DataMemory (8 KiB: 0x0000..0x1FFF)
    call main
1:  j   1b                # loop infinito
