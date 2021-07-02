#include <stdio.h>
#include <math.h>

int reverse(int);

int main()
{
	int a = reverse(123);
	int b = reverse(-123);
	int c = reverse(120);
	int d = reverse(0);
	int e = reverse(-2147483648);
	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
}

int reverse(int x){
	long long res = 0;

	while(x){
		res = res*10 + x%10;
		x /= 10;
	}
	if (res>pow(2, 31) || res<-pow(2, 31)-1)
		return 0;
	return res;
}
