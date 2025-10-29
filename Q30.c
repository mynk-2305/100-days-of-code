// Write a program to reverse a given number.


#include <stdio.h>

int main() {
    int n;
    long long reverse = 0, remainder;
    printf("Enter your number:\n");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;        
        reverse = reverse * 10 + remainder; 
        n = n / 10;                   
    }

    printf("Reversed number = %lld\n", reverse);
    return 0;
}
