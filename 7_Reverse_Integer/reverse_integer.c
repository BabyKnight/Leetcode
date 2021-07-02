#include <stdio.h>

int reverse(int);

int main()
{
	int a = reverse(123);
	int b = reverse(-123);
	int c = reverse(120);
	int d = reverse(0);
	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
}

int reverse(int x){
	// record whether current number is negative
	int is_negative = x < 0;

	int temp = x * (is_negative ? -1 : 1);
	int res = 0;
	while (temp/10 > 0)
	{
		res = res*10 + temp%10;
		temp = temp/10;
	}
	res = res*10 + temp;

	res = res * (is_negative ? -1 : 1);

	return res;
}
