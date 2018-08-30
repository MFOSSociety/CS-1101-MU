# Author   : @0x48piraj
# Synopsis : Number System Conversion Tool
# Func. at the time of writing : Binary --> Decimal and Octal --> Decimal

def binary2decimal(binary):
  i=str(binary)
  n=len(i)- 1
  f=0
  for e in i:
   f=f+int(e)*(2**n)
   n=n-1
  print(f)
  

def octal2decimal(oct):
  i=str(oct)
  n=len(i)- 1
  f=0
  for e in i:
   f=f+int(e)*(8**n)
   n=n-1
  print(f)
