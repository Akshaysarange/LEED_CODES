// sum of the digits
// Example: 1234 → 1+2+3+4 = 10

/*
#include <stdio.h>

int sum_of_digits(){
    int n, total = 0, digit;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n > 0){
        digit = n % 10;
        total += digit;
        n /= 10;
    }
    printf("%d",total);
}

int main(){
    sum_of_digits();
    return 0;
}*/

// Find the vowels (a, e, i, o, u) in given string

/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100], vowels[] = "aeiou";
    int count = 0, i, j;

    printf("Enter any thing you want:- ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; vowels[j] != '\0'; j++)
        {
            if (str[i] == vowels[j])
            {
                count++;
            }
        }
    }

    
    printf("Total vowels %d", count);

    return 0;
}*/

// reverse the given number
#include <stdio.h>

int main(){
    int num,rev = 0,digit;

    printf("Enter number: ");
    scanf("%d",&num);

    while(num > 0){
        digit = num %10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    printf("Reversed Number: %d",rev);
    return 0;
}