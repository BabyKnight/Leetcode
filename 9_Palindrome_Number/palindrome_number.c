#include <stdio.h>
#include <math.h>

typedef int bool;
#define True 1
#define False 0

bool isPalindrome(int);

int main()
{
    printf("%d\n", isPalindrome(121));
    printf("%d\n", isPalindrome(-121));
    printf("%d\n", isPalindrome(10));
    printf("%d\n", isPalindrome(-101));
    printf("%d\n", isPalindrome(998765432));
}

bool isPalindrome(int x){
    if(x<0)
        return 0;
    int temp = x;
    long rev = 0;
    while(temp){
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    if(rev > pow(2, 31)-1)
        return 0;
    if(rev == x)
        return 1;
    return 0;
}
