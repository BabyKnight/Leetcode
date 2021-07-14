#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char * intToRoman(int);

int main(){
    printf("%s\n", intToRoman(3));
    printf("%s\n", intToRoman(4));
    printf("%s\n", intToRoman(9));
    printf("%s\n", intToRoman(58));
    printf("%s\n", intToRoman(1994));
}


char * intToRoman(int num){

    int number[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* symbol[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    char *result = (char*)malloc(sizeof(char)*13);
    result[0] = '\0';
    //static char[13];
    int temp = num;
    int count = 0;
    for(int i=0; i<13; i++){
        if(temp/number[i]!=0){
            count = temp/number[i];
            for(int j=0; j<count; j++){
                strcpy(result + strlen(result), symbol[i]);
            }
            temp %= number[i];
        }
    
    }
    
    return result;
}
