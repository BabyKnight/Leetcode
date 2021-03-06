#include <stdio.h>
#include <string.h>

int romanToInt(char*);

int main(){
    printf("%d\n", romanToInt("III"));
    printf("%d\n", romanToInt("IV"));
    printf("%d\n", romanToInt("IX"));
    printf("%d\n", romanToInt("LVIII"));
    printf("%d\n", romanToInt("MCMXCIV"));

}

int romanToInt(char * s){
    int hashmap[26] = {0};
    hashmap['I' - 'A'] = 1;
    hashmap['V' - 'A'] = 5;
    hashmap['X' - 'A'] = 10;
    hashmap['L' - 'A'] = 50;
    hashmap['C' - 'A'] = 100;
    hashmap['D' - 'A'] = 500;
    hashmap['M' - 'A'] = 1000;
    
    int previous = 0, sum = 0;
    for(int i=0; i<strlen(s); i++){
        if (previous < hashmap[ s[i]- 'A']){
            sum -= previous*2;
        }
        sum += (previous = hashmap[s[i] - 'A']);
    }
    return sum;
}
