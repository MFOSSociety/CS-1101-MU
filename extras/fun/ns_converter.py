# Author   : @0x48piraj
# Synopsis : Number System Conversion Tool
# F(n) at the time of writing : 
 # (*) Binary --> Decimal 
 # (*) Octal --> Decimal
# Usage : *For now, it consists of only definitions, load the definitions, call them with their respective arg(s)*

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
  
  def decimal2binary(decimal):
       f = []
       while decimal > 0:
           f.append(str(decimal%2))
           decimal = int(decimal/2)
       print(''.join(f[::-1])) 

