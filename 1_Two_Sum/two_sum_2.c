#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main()
{
    int nums[2] = {3, 3};
    int target = 6;

    int retSize;
    int* res;

    res = twoSum(nums, 2, target, &retSize);

    printf("%d, %d\n", *res, *(res+1));
}



int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* res = (int*)malloc(sizeof(int)*2);
    *returnSize = 2;
    for(int i=0; i<numsSize-1; i++)
        for(int j=i+1; j<numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                *res = i;
                *(res+1) = j;
                return res;
            }
        }
    return 0;
}
