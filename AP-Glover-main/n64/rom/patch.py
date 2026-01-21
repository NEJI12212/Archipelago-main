import hashlib
import os
import bsdiff4

def read_file(path):
        with open(path, 'rb') as fi:
            data = fi.read()
        return data

bsdiff4.file_diff("Glover.z64", "GloverPatch.n64", "Glover.patch")
if os.path.isfile("GloverPatch.n64"):
    rom = read_file("GloverPatch.n64")
print(hashlib.md5(rom).hexdigest())
