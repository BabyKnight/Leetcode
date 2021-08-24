#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * longestCommonPrefix(char ** strs, int strsSize);

int main(){

   char* str_1[3] = {"flower", "flow", "floght"};
   char* test = longestCommonPrefix(str_1, 3);
   printf("%s\n", test);
   free(test);

   char* str_2[3] = {"dog", "racecar", "car"};
   char* test2 = longestCommonPrefix(str_2, 3);
   printf("%s\n", test2);
   free(test2);

   char* str_3[1] = {"car"};
   char* test3 = longestCommonPrefix(str_3, 1);
   printf("%s\n", test3);
   free(test3);
   return 0;
}

char * longestCommonPrefix(char ** strs, int strsSize){

    char tmp;
    int index=0;

		for(index=0; index<strlen(*strs); index++){
				for(int i=0; i<strsSize; i++){
						printf("%d %c - %c\n",index, **(strs+i), *(*(strs+i)+index));
						if(*(*strs+index) != *(*(strs+i)+index))
								goto ret;
				}
		}
		ret: ;
		printf("index is [%d]\n", index);
    char * res = (char*)malloc(sizeof(char)*(index+1));
		// set the last char to \0
    res[index] = '\0';
    strncpy(res, *strs, index);
    return res;


}
