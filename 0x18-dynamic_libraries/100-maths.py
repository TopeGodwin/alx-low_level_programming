from ctypes import *
math = CDLL("./100-operations.so")
 
#call C function to check connection 
math.connect() 
 
#calling randNum() C function
#it returns random number
varRand = math.randNum()
print ("Random Number:", varRand, type(varRand))
 
#calling addNum() C function
#it returns addition of two numbers
varAdd = math.addNum(20,30)
print ("Addition : ", varAdd)
