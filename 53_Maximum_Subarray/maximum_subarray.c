#include <stdio.h>

int maxSubArray(int* nums, int numsSize);

int main()
{
	int array_1[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int array_2[1] = {1};
	int array_3[1] = {0};
	int array_4[1] = {-1};
	int array_5[1] = {-100000};

	int res_1 = maxSubArray(array_1, 9);
	printf("%d\n", res_1);
	int res_2 = maxSubArray(array_2, 1);
	printf("%d\n", res_2);
	int res_3 = maxSubArray(array_3, 1);
	printf("%d\n", res_3);
	int res_4 = maxSubArray(array_4, 1);
	printf("%d\n", res_4);
	int res_5 = maxSubArray(array_5, 1);
	printf("%d\n", res_5);
}


/*
	* Record the first value as the Max value, no matter it's nagative
	* Calcuate sum of subarray, if sum is not negative, that means it will be
	    effectively increase the sum for the values after that
	* if sum is negative, then reset the sum as 0 and re-calculate the sum from next value
	* Record the max value each time when calculate the sum of subarray
*/
int maxSubArray(int* nums, int numsSize)
{

	int max, sum=0;
	for(int i=0; i<numsSize; ++i)
	{
		sum += *(nums+i);

		if (i == 0)
			max = sum;
		else
		{
			if (max < sum)
				max = sum;
		}
		if (sum < 0)
			sum = 0;
	}
	return max;
	printf("axm sum is %d\n", max);

}
