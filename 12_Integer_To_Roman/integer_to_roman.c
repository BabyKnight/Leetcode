#include <stdio.h>
#include <math.h>

char * intToRoman(int);

int main(){
    printf("%s\n", intToRoman(3));
    printf("%s\n", intToRoman(4));
    printf("%s\n", intToRoman(9));
    printf("%s\n", intToRoman(58));
    printf("%s\n", intToRoman(1994));
}


char * intToRoman(int num){
    char symbol[4][2] = { {'I','V'}, {'X','L'}, {'C','D'}, {'M',' '} };
    
    int temp = num;
    int val = 0;

    // from largest to smallest
    for(int i=3; i>=0; i--){
        // divided by 1000, 100, 10, and 1
        // val could be 0 - 9
        val = temp/pow(10, i);
        printf("%d\n", val);
        

        temp %= (int)pow(10, i);
        printf("%d\n", temp);
    }

    return "end";


}
