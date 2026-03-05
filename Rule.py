num = int(input("Enter a number: "))
temp = num

while temp > 100:
    last = temp % 10
    temp = temp // 10 + 2 * last

if temp % 19 == 0:
    print(num, "is divisible by 19")
else:
    print(num, "is not divisible by 19")
