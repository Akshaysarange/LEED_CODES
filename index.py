# sum of digits
# Example: 1234 → 1+2+3+4 = 10

def sum_of_digits():
    number = int(input("Enter number: "))
    total = 0
    while number > 0:
        digit = number % 10
        total += digit
        number //= 10

    print(total) 

sum_of_digits()