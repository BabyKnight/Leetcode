#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * longestCommonPrefix(char ** strs, int strsSize);

int main(){

   char* str_1[3] = {"flower", "flow", "floght"};
   char* test = longestCommonPrefix(str_1, 3);
   printf("%s\n", test);
   free(test);
   return 0;
}

char * longestCommonPrefix(char ** strs, int strsSize){

    char * res = (char*)malloc(sizeof(char)*20);
    res[0] = '\0';
    char temp;

    for(int i=0; i<strlen(strs[0]); i++){
        temp = *(strs[0]+i);
        printf("%c\n", temp);
    }

    for(int i=0; i<strsSize; i++){
        printf("%s\n", strs[i]);
    }


    return res;


}
