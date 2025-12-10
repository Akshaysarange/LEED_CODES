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

// #include <stdio.h>

// int main(){
//     int num,rev = 0,digit;

//     printf("Enter number: ");
//     scanf("%d",&num);

//     while(num > 0){
//         digit = num %10;
//         rev = rev * 10 + digit;
//         num /= 10;
//     }

//     printf("Reversed Number: %d",rev);
//     return 0;
// }


// Return the highest number in givin list

// #include <stdio.h>

// int high_num(){
//     int num[] = {100, 255, 66, 45, 78, 20, 2};
//     int high = num[0];

//     for(int i = 1; i < 7; i++){
//         if(num[i] > high){
//             high = num[i];
//         }
    
//     printf("Highest number is: %d", high);
//     return high;
//     }

// }

// int main(){
//     high_num();
//     return 0;
// }

// check the given string having palindrome or not
// eg,. "madam" → Yes"

// #include <stdio.h>

// void is_palindrome(){
//     char str[100];
//     int len = 0, flag = 1;

//     printf("Enter any string: ");
//     scanf("%s", str);

//     while(str[len] != '\0'){
//         len++;
//     }

//     for(int i = 0; i < len/2; i++){
//         if(str[i] != str[len - i - 1]){
//             flag = 0;
//             break;
//         }
//     }

//     if(flag){
//         printf("Yes, it is a palindrome");
//     }else{
//         printf("No, it is not a palindrome");
//     }
// }

// int main(){
//     is_palindrome();
    
//     return 0;
// }

//Count digits in a number

#include <stdio.h>

int digit_count(){
    int num, count = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    while(num > 0){
        num /= 10;
        count++;
    }
    printf("Total digits: %d", count);
}

int main(){
    digit_count();
    return 0;
}