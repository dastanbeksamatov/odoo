# Python 3.8
import os
cd = os.getcwd()
# files is in the working directory
path = cd+'/data/data.bin'

initSize = os.path.getsize(path)
print('initial size', str(initSize))
for i in range(0, initSize, 7):
  initSize = initSize - 1
  os.truncate(path, initSize)
  
print(os.path.getsize(path))