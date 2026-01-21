import hashlib
import os
import bsdiff4

def read_file(path):
        with open(path, 'rb') as fi:
            data = fi.read()
        return data

bsdiff4.file_diff("Gex 64 - Enter the Gecko (U).z64", "GexPatch.n64", "Gex64.patch")
if os.path.isfile("GexPatch.n64"):
    rom = read_file("GexPatch.n64")
print(hashlib.md5(rom).hexdigest())


