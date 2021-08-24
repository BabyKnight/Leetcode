#include <stdio.h>
#include <stdbool.h>

bool isValid(char *s){
		// init stack
		char stack[10000];
		int top = -1;

		while(*s != '\0'){
				
				// push stack
				//printf("->%d\n", top);
				if(*s == '(' || *s == '[' || *s == '{'){
						//printf("Push stack ...");
						stack[++top] = *s;
						//printf(" - %d\n", top);
				}
				else{
						if(top == -1)
								return false;
						else if(*s == ')' && stack[top--]!= '('){
								return false;
						}
						else if(*s == ']' && stack[top--]!= '['){
								return false;
						}
						else if(*s == '}' && stack[top--]!= '{'){
								return false;
						}
				
				}
				s++;
		}
		if(top!=-1)
				return false;
		return true;

}


int main()
{
		printf("%s\n", isValid("()")?"true":"false");
		printf("%s\n", isValid("()[]{}")?"true":"false");
		printf("%s\n", isValid("(]")?"true":"false");
		printf("%s\n", isValid("([)]")?"true":"false");
		printf("%s\n", isValid("{[]}")?"true":"false");
}
