num1 =int(input("Enter the first number: "))
num2 =int(input("enter the second number: "))
if num1 < num2:
    min = num1
else:
    min = num2
gcd = 1
for i in range(1, min + 1):
    if num1 % i == 0 and num2 % i == 0:
            gcd = i
pribt(f"The GCD of {num1} and {num2} is {gcd}")
