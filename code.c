// sum of the digits
// Example: 1234 → 1+2+3+4 = 10
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
}