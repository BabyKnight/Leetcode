#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char * s){
	int max = 0;
	int len = strlen(s);

	int num[128] = {-1};
	memset(num, -1, 128*sizeof(int));

	char temp;
	int flag = -1;
	int i = 0;
	
	for(i=0; i<len; ++i)
	{
		temp = num[s[i]];
		num[s[i]] =i;
		if(temp >= flag)
		{
			max = max > (i - temp) ? max : (i - temp);
			flag = temp + 1;
		}
	}
	max = max > (i - flag) ? max : (i - flag);
	return max;

}


int main()
{
	char* s = "hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int res = lengthOfLongestSubstring(s);
	printf("%d\n", res);

}
