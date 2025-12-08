# sum of digits
# Example: 1234 → 1+2+3+4 = 10
'''
def sum_of_digits():
    number = int(input("Enter number: "))
    total = 0
    while number > 0:
        digit = number % 10
        total += digit
        number //= 10

    print(total) 

sum_of_digits()
'''
#Find the vowels (a, e, i, o, u) in given string
'''
text = input("Enter any thing you want: ")
count = 0

for ch in text:
    if ch.lower() in 'aeiou':
        count += 1
    else:
        count
    
print("Total vowels:- ",count)
'''

# reverse the given number

'''
num = int(input("Enter any number: "))
rev = 0
while num > 0:
    digit = num % 10
    rev = rev * 10 + digit
    num //= 10

print("Reversed Number: ", rev)
'''

# Return the highest number in givin list

# def high_num():
#     num = [10, 25, 55, 73, 123, 88, 45]
#     high = num[0]

#     for i in num:
#         if i > high:
#             high = i
    
#     print("Highest number is: ", high)

# high_num()

# check the given string having palindrome or not
# eg,. "madam" → Yes"

# def is_palindrome():
#     text = input("Enter any string: ")
#     rev = text[::-1]

#     if text == rev:
#         print("Yes, it is a palindrome")
#     else:
#         print("No, it is not a palindrome")

# is_palindrome()