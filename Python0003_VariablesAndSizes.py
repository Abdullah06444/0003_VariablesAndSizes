# Python'da degiskenlerin tipini yazmadan direk yazariz.
import sys

# Primitive Variable types
inputt = 'A'
print("The ",type(inputt)," variable and also size => ",sys.getsizeof(inputt)," byte")

inputt = 5
print("The ",type(inputt)," variable and also size => ", sys.getsizeof(inputt)," byte")

inputt = bytes(inputt)
print("The ",type(input)," variable and also size => ", sys.getsizeof(inputt)," byte")

inputt = 5.4321
print("The ",type(inputt)," variable and also size => ", sys.getsizeof(inputt)," byte")

inputt = 1.79e308
print("This number is ",inputt," The ",type(inputt)," variable and also size => ", sys.getsizeof(inputt)," byte")

inputt = 1.8e308
print("This number is ",inputt," The ",type(inputt)," variable and also size => ", sys.getsizeof(inputt)," byte")
# print, for this number is infinite, overflow

inputt = 5e-324
print("This number is ",inputt," The ",type(inputt)," variable and also size => ", sys.getsizeof(inputt)," byte")

inputt = 5e-325
print("This number is ",inputt," The ",type(inputt)," variable and also size => ", sys.getsizeof(inputt)," byte")
# print, for this number is zero, overflow
